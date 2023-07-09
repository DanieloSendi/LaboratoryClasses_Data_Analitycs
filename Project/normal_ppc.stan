generated quantities {
  real mu = normal_rng(1.46, 0.21);  
  real <lower =0> sigma = exponential_rng(4.76); 
  real length = normal_rng(mu, sigma);
}