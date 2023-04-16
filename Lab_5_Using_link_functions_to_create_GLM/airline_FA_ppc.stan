data {
    int<lower=0> N;  // number of years analyzed
    array[N] real<lower=0> Miles_flown;  //number of miles flown each year (samples)
}

generated quantities {
    real alfa = normal_rng(1.9, 0.001);
    real theta = normal_rng(0.0002, 0.00008);
    array[N] real lambda;
    array[N] real<lower=0> y; // number of accidents

    for (i in 1:N) {
       lambda[i] = exp(alfa + theta * Miles_flown[i]);
       y[i] = poisson_rng(lambda[i]);
    }
}