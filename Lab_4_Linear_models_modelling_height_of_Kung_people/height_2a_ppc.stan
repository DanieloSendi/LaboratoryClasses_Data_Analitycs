data {
  int<lower=0> N; // number of samples
  real weight[N]; // weight data
}

generated quantities {
  real alpha = normal_rng(180,15);
  real beta = normal_rng(0,10);
  real sigma = exponential_rng(0.067);
  real height[N];
  for (i in 1:N) {
    height[N] = normal_rng(alpha + beta * weight[N],sigma);
  }
}