data {
    int<lower=0> N;  // number of years analyzed
    array[N] real<lower=0> Miles_flown; //number of miles flown each year (samples)
    array[N] int<lower=0> accidents;
}

parameters {
   real alfa;
   real theta;
}

transformed parameters {
   array[N] real lambda;
   for (i in 1:N) {
       lambda[i] = exp(alfa + theta * Miles_flown[i]);
    }
}

model {
   alfa ~ normal(1.9, 0.001);
   theta ~ normal(0.0001, 0.00008);
   accidents ~ poisson(lambda);
}

generated quantities {
    array[N] int<lower=0> y;
    for (i in 1:N) {
       y[i] = poisson_rng(lambda[i]);
    }
}