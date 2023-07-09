data {
    int N; //number of measurements
    int K; //number of predictors
    matrix [N,K] X; //design matrix
    real lengths[N];
}

parameters {
    real alpha;
    vector[K] beta;
    real<lower=0.01> sigma;
}

transformed parameters {
    vector[N] mu = X*beta+alpha;
}

model {
    alpha ~ normal(1.403, 0.256);
    beta ~ normal(0, 0.1);
    sigma ~ exponential(3.91);
    lengths ~ normal(mu,sigma);
}

generated quantities {
    real Length[N];
    for (i in 1:N) {
        Length[i] = normal_rng(mu[i],sigma);
  }
}
