data {
   int N;
   real Shell_Weight[N];
}

generated quantities {
   real alpha = normal_rng(1.4, 0.26);
   real beta = normal_rng(0, 0.1);
   real sigma = exponential_rng(3.85);
   real length[N];

   for (i in 1:N) {
      length[i] = normal_rng(Shell_Weight[i]*beta+alpha, sigma);
   }
}