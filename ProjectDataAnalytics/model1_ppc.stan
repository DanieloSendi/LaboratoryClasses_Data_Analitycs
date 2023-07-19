data { 
  // Output related data
  int K;  // number of ordinal categories
  int y;  // ordinal outcome

  // Predictors (1-6)
  real age_pred;             // Predictor 1 (age)
  int gender_pred;           // Predictor 2 (gender)
  int schoolsup_pred;        // Predictor 3 (extra educational support)
  int famsup_pred;           // Predictor 4 (family educational support)
  int studytime_pred;        // Predictor 5 (weekly study time)
  int activities_pred;              // Predictor 6 (activity)
}

parameters {
  ordered[K-1] c;
}

model {
  c ~ uniform(-25, 25);
}

generated quantities{
  // // Coefficients for predictors (1-5)

  real coef_age = normal_rng(0, 1);            // Coefficient 1 (age)
  real coef_gender = normal_rng(0, 1);         // Coefficient 2 (gender)
  real coef_schoolsup = normal_rng(0, 1);      // Coefficient 3 (extra educational support)
  real coef_famsup = normal_rng(0, 1);         // Coefficient 4 (family educational support)
  real coef_activity = normal_rng(0,1);        // Coefficient 5 (activity)

  vector[4] coef_studytime ;                   // Coefficient 6 (weekly study time)

  for (i in 1:4) {
    coef_studytime[i] = normal_rng(0, 1);
  }


  real grade = ordered_logistic_rng(coef_studytime[studytime_pred] + 
                                    coef_age * age_pred +
                                    coef_gender * gender_pred +
                                    coef_schoolsup * schoolsup_pred +
                                    coef_famsup * famsup_pred + coef_activity*activities_pred , c);
}