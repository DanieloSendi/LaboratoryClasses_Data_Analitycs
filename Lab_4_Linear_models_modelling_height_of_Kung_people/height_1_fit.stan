data {
  int<lower=0> N;        // number of samples
  real<lower=0> heights[N]; // array of heights
}

parameters {
  real mu;        // mean
  real<lower=0> sigma;  // standard deviation
}

model {
  mu ~ normal(180, 15);   // prior for mu
  sigma ~ exponential(0.067);  // prior for sigma
  heights ~ normal(mu, sigma);  // likelihood
}

generated quantities {
  real height = normal_rng(mu, sigma); // generate a single height consistent with the model
}