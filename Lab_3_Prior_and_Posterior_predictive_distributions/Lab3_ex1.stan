generated quantities {
    int<lower=0> N; // number of trials
    int<lower=0,upper=N> y; // number of success reaction
    real<lower=0,upper=1> p; // probability of allergic reaction

    N = 50;
    // represents the prior belief that allergic reactions occur in 20% of cases on average.
    p = normal_rng(0.2, 0.1);
    // prior predictive distribution
    y = binomial_rng(N, p); 
}