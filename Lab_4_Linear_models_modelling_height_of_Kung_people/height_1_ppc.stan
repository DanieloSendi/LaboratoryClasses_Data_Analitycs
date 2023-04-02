generated quantities {
    
    real<lower=0> mu;
    real<lower=0> sigma;
    real<lower=0> height;

    mu = normal_rng(180, 15);  // Mean for prior, general knowledge about heights of people
    sigma = exponential_rng(0.067);  // measurement error

    // propose a distribution and parameters for prior of standard deviation
    height = normal_rng(mu, sigma); // Prior
}