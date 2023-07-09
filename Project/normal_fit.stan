data {
    int N;
    real lengths[N];
}

parameters {
   real mu;
   real <lower = 0.01> sigma;
}

model {
    mu ~ normal(1.46, 0.21);
    sigma ~ exponential(4.76);
    lengths ~ normal(mu, sigma);
}

generated quantities {
    vector[N] log_lik;
    real length;
    for (j in 1:N)
    {
        log_lik[j] = normal_lpdf(lengths[j] | mu, sigma);
    }
    length = normal_rng(mu, sigma);
    
}
