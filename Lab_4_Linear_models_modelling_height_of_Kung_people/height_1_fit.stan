data {
    real<lower=0,upper=N> heights;
}

parameters{
    real<lower=0, upper=1> mean;
    real<lower=0, upper=1> standardev;
}

model{
    // Prior
  p ~ normal_rng(mean, standardev);

  // Likelihood
  y ~ binomial_rng(mean, standardev);
}

generated quantities {
   
}
