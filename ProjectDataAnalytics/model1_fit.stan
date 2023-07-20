data {
  // Number of observations
  int<lower=0> N;

  // Output related data
  int K;                  // Number of ordinal categories
  array[N] int y;         // Ordinal outcome

  // Predictors (1-6)
  array[N] real age_pred;             // Predictor 1 (age)
  array[N] int gender_pred;           // Predictor 2 (gender)
  array[N] int schoolsup_pred;        // Predictor 3 (extra educational support)
  array[N] int famsup_pred;           // Predictor 4 (family educational support)
  array[N] int studytime_pred;        // Predictor 5 (weekly study time)
  array[N] int activities_pred;       // Predictor 6 (activities)
}

parameters {
  ordered[K-1] c;               // cutpoints

  // Coefficients for predictors (1-6)
  real coef_age;                // Coefficient 1 (age)
  real coef_gender;             // Coefficient 2 (gender)
  real coef_schoolsup;          // Coefficient 3 (extra educational support)
  real coef_famsup;             // Coefficient 4 (family educational support)
  real coef_activity;           // Coefficient 5 (activities)
  vector[4] coef_studytime;     // Coefficient 6 (weekly study time)
}

model {
  // Priors
  c ~ normal(0, 3);                       // Prior for cutpoints
  coef_age ~ normal(0, 1);                  // Prior for age coefficient
  coef_gender ~ normal(0, 1);               // Prior for gender coefficient
  coef_schoolsup ~ normal(0, 1);            // Prior for extra educational support coefficient
  coef_famsup ~ normal(0, 1);               // Prior for family educational support coefficient
  coef_activity ~ normal(0, 1);             // Prior for activities coefficient
  coef_studytime ~ normal(0, 1);            // Prior for weekly study time coefficient

  // Likelihood
  for (n in 1:N) {
    y[n] ~ ordered_logistic(coef_studytime[studytime_pred[n]] +
                            coef_age * age_pred[n] +
                            coef_gender * gender_pred[n] +
                            coef_schoolsup * schoolsup_pred[n] +
                            coef_famsup * famsup_pred[n] +
                            coef_activity * activities_pred[n], c);
  }
}

generated quantities {
  array[N] real grade;
  array[N] real log_lik;

  for (n in 1:N) {
    grade[n] = ordered_logistic_rng(coef_studytime[studytime_pred[n]] +
                                    coef_age * age_pred[n] +
                                    coef_gender * gender_pred[n] +
                                    coef_schoolsup * schoolsup_pred[n] +
                                    coef_famsup * famsup_pred[n] +
                                    coef_activity * activities_pred[n], c);

    log_lik[n] = ordered_logistic_lpmf(y[n] | coef_studytime[studytime_pred[n]] +
                                          coef_age * age_pred[n] +
                                          coef_gender * gender_pred[n] +
                                          coef_schoolsup * schoolsup_pred[n] +
                                          coef_famsup * famsup_pred[n] +
                                          coef_activity * activities_pred[n], c);
  }
}
