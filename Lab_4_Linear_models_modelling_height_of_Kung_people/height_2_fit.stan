data {
  int<lower=0> N; // number of samples
  real<lower=0> heights[N]; // height data
  vector[N] weight; // weight data
}

parameters { 
  real alpha;
  real beta;
  real<lower=0> sigma;
}

transformed parameters {
  vector[N] mu = weight * beta + alpha;

  real mi_arr[N];
  for (i in 1:N) {
    mi_arr[i] = alpha + beta * weight[i];
  }
}

model {
    
  // priors
  alfa ~ normal(180, 15);
  beta ~ lognormal(0, 1);
  sigma ~ exponential(0.067);
  heights ~ normal(mu,sigma);

  // likelihood
  for (i in 1:N) {
    real mu = mi_arr[i];
    heights[i] ~ normal(mu, sigma);
  }
}

generated quantities {
  real height[N];
  for (i in 1:N) {
    height[i] = normal_rng(mi_arr[i], sigma);
  }
}
