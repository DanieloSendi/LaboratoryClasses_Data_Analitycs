data {
   int N;
   vector[N] Shell_Weight;
   real lengths[N];

}

parameters{
    real alpha;
    real beta;
    real <lower =0> sigma;
}

transformed parameters {
   vector[N]mu = Shell_Weight*beta+alpha;
}

model{
    alpha ~ normal(1.4, 0.26);
    beta ~ normal(0, 0.1);
    sigma ~ exponential(3.85);
    lengths ~ normal(mu,sigma);
}
generated quantities {
    array [N] real length;
    vector[N] log_lik;
    for (i in 1:N){
        length[i] = normal_rng(mu[i],sigma);
        log_lik[i] = normal_lpdf(lengths[i] | mu[i],sigma);
    }
}