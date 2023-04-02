data {
  int N; // number of samples
  // real heights[N]; // height data
  real heights[N];
  vector[N] weight;
}

parameters { 
  real alpha;
  real beta;
  real<lower=0> sigma;
}

transformed parameters {
  // real mu[N];
  // for (i in 1:N) {
  //   mu[i] = alpha + beta * weight[i];
  // }
vector[N] mu = alpha + beta*weight;
}

model {
    
  // priors
  alpha ~ normal(180, 15);
  beta ~ lognormal(0, 1);
  sigma ~ exponential(0.067);
  heights ~ normal(mu,sigma);

  // // likelihood
  // for (i in 1:N) {
  //   heights[i] ~ normal(mu[i], sigma);
  // }
}

generated quantities {
  real height[N];
  for (i in 1:N) {
    height[i] = normal_rng(mu[i], sigma);
  }
}