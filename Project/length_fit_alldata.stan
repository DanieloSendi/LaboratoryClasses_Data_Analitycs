data {
    int N;
    vector[N] shell_weight;
    real lengths[N];
}

parameters {
    real alpha;
    real beta_1;
    real beta_2;
    real<lower=0.01> sigma;
}

transformed parameters {
    vector[N] mu;
    for (i in 1:N) {
        mu[i] = shell_weight[i] * beta_1 + shell_weight[i]^2 * beta_2 + alpha;
    }
}

model {
    alpha ~ normal(1.403, 0.256);
    beta_1 ~ normal(0, 0.1);
    beta_2 ~ normal(0, 10);
    sigma ~ exponential(3.91);
    for (i in 1:N) {
        lengths[i] ~ normal(mu[i], sigma);
    }
}

generated quantities {
    vector[N] length_generated;
    for (i in 1:N) {
        length_generated[i] = normal_rng(mu[i], sigma);
    }
}
