long long sumOfDivisors(int n)
    {
       long long sum = 0;
       for(int i = 1 ; i <= n ; i++){
           sum = sum + (n/i) * i;
       }
       return sum;
    }
