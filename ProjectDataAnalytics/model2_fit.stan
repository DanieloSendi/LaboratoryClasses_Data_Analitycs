data { 
   // Number of observations
  int<lower=0> N;  

  // Output related data
  int K;  // number of ordinal categories
  array[N] int y;  // ordinal outcome

  // Predictors (1-11)
  array[N] real age_pred;             // Predictor 1 (age)
  array[N] int gender_pred;           // Predictor 2 (gender)
  array[N] int schoolsup_pred;        // Predictor 3 (extra educational support)
  array[N] int famsup_pred;           // Predictor 4 (family educational support)
  array[N] int studytime_pred;        // Predictor 5 (weekly study time)

  array[N] int internet_pred;         // Predictor 6 (Internet access at home)
  array[N] int romantic_pred;         // Predictor 7 (with a romantic relationship)
  array[N] int traveltime_pred;       // Predictor 8 (home to school travel time)
  array[N] int activities_pred;       // Predictor 9 (extra-curricular activities)
  array[N] int Mjob_pred;             // Predictor 10 (mother's job)
  array[N] int Fjob_pred;             // Predictor 11 (father's job)
  
}

parameters {
  ordered[K-1] c;                     // cutpoints

  // Coefficients for predictors (1-9)

  real coef_age;                      // Coefficient 1 (age)
  real coef_gender;                   // Coefficient 2 (gender)
  real coef_schoolsup;                // Coefficient 3 (extra educational support)
  real coef_famsup;                   // Coefficient 4 (family educational support)

  vector[4] coef_studytime;           // Coefficient 5 (weekly study time)

  real coef_internet;                 // Coefficient 6 (Internet access at home)
  real coef_romantic;                 // Coefficient 7 (with a romantic relationship)
  real coef_activities;               // Coefficient 8 (extra-curricular activities)
  
  vector[4] coef_traveltime;          // Coefficient 9 (home to school travel time)
  vector[5] coef_Mjob;                // Coefficient 10 (mother's job)
  vector[5] coef_Fjob;                // Coefficient 11 (father's job)

}

model {

  // Priors (1-12)

  c ~ normal(0, 3);                         // Prior 0 (cutpoints)
  coef_age ~ normal(0, 1);                // Prior 1 (age)
  coef_gender ~ normal(0, 1);             // Prior 2 (gender)
  coef_schoolsup ~ normal(0, 1);          // Prior 3 (extra educational support)
  coef_famsup ~ normal(0, 1);             // Prior 4 (family educational support)
  coef_studytime ~ normal(0, 1);          // Prior 5 (weekly study time)
  
  coef_internet ~ normal(0, 1);           // Prior 6 (Internet access at home)
  coef_romantic ~ normal(0, 1);           // Prior 7 (with a romantic relationship)
  coef_activities ~ normal(0, 1);         // Prior 8 (extra educational support)
  coef_traveltime ~ normal(0, 1);         // Prior 9 (home to school travel time)
  coef_Mjob ~ normal(0, 1);               // Prior 10 (mother's job)
  coef_Fjob ~ normal(0, 1);               // Prior 11 (father's job)


  // likelihood
  for(n in 1:N) 
    y[n] ~ ordered_logistic(coef_studytime[studytime_pred[n]] +
                            coef_traveltime[traveltime_pred[n]] +
                            coef_Mjob[Mjob_pred[n]] +
                            coef_Fjob[Fjob_pred[n]] +
                            coef_age * age_pred[n] +
                            coef_gender * gender_pred[n] +
                            coef_schoolsup * schoolsup_pred[n] +
                            coef_famsup * famsup_pred[n] +
                            coef_internet * internet_pred[n] +
                            coef_romantic * romantic_pred[n] +
                            coef_activities * activities_pred[n], c);
                            
}

generated quantities{
  array[N] real grade;
  array[N] real log_lik;
  for (n in 1:N) {
    grade[n] = ordered_logistic_rng(coef_studytime[studytime_pred[n]] +
                                    coef_traveltime[traveltime_pred[n]] +
                                    coef_Mjob[Mjob_pred[n]] +
                                    coef_Fjob[Fjob_pred[n]] +
                                    coef_age * age_pred[n] +
                                    coef_gender * gender_pred[n] +
                                    coef_schoolsup * schoolsup_pred[n] +
                                    coef_famsup * famsup_pred[n] +
                                    coef_internet * internet_pred[n] +
                                    coef_romantic * romantic_pred[n] +
                                    coef_activities * activities_pred[n], c);

    // real ordered_logistic_glm_lpmf(int y | row_vector x, vector beta, vector c)  
    log_lik[n] = ordered_logistic_lpmf(y[n]|coef_studytime[studytime_pred[n]] +
                                      coef_traveltime[traveltime_pred[n]] +
                                      coef_Mjob[Mjob_pred[n]] +
                                      coef_Fjob[Fjob_pred[n]] +
                                      coef_age * age_pred[n] +
                                      coef_gender * gender_pred[n] +
                                      coef_schoolsup * schoolsup_pred[n] +
                                      coef_famsup * famsup_pred[n] +
                                      coef_internet * internet_pred[n] +
                                      coef_romantic * romantic_pred[n] +
                                      coef_activities * activities_pred[n], c);
  }
}
