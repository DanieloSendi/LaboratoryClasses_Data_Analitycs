generated quantities {
    
    real<lower=0> mu;
    real sigma;
    real<lower=0> height;

    mu = normal_rng(180, 10);  // Mean for prior, general knowledge about heights of people
    sigma = normal_rng(15, 2);  // measurement error

    // propose a distribution and parameters for prior of standard deviation
    height = normal_rng(mu, sigma); // Prior
}