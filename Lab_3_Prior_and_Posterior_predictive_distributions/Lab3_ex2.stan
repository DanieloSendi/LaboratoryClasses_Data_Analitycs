data {
  int<lower=0> N; // number of trials
  int<lower=0,upper=N> y; // number of successes
}

parameters {
  real<lower=0,upper=1> p; // probability of success
}

model {
  // Prior
  p ~ beta(0.2, 0.1);
  
  // Likelihood
  y ~ binomial(N, p);
}

generated quantities {
  int<lower=0, upper=N> y_pred;
  
  // Posterior predictive
  y_pred = binomial_rng(N, p);
}