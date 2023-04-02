data {
  int<lower=0> N; // number of samples
  real<lower=0> heights[N]; // height data
  real<lower=0> weights[N]; // weight data
}

parameters {
  real mi;
  real<lower=0> sigma;
  real alfa;
  real<lower=0> beta;
}

transformed parameters {
  real mi_arr[N];
  for (i in 1:N) {
    mi_arr[i] = alfa + beta * weights[i];
  }
}

model {
    
  // priors
  mi ~ normal(180, 15);
  sigma ~ normal(15, 5);
  alfa ~ normal(mi, sigma);
  beta ~ lognormal(0, 1);

  // likelihood
  for (i in 1:N) {
    real mu = mi_arr[i];
    heights[i] ~ normal(mu, sigma);
  }
}

generated quantities {
  real height_sim[N];
  for (i in 1:N) {
    height_sim[i] = normal_rng(mi_arr[i], sigma);
  }
}
