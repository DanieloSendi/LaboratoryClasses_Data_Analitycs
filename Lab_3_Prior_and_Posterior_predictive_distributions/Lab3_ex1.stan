data {
    int<lower=1> N;
    int<lower=0,upper=1> y[N];
}

generated quantities {
    int N;
    N = 50;//number of trials
    int y;//number of successes
    real p; //probability of allergic reaction
    
}