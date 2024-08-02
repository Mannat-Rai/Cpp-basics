int evenlyDivides(int N){
        int count = 0;
        
        int lastdigit;
        
        int Originalnum = N;
        
        while( N != 0 )
        {
            lastdigit = N % 10;
            
            if(lastdigit != 0 && Originalnum % lastdigit == 0) count++;
            
            N = N / 10;
        }
        
        return count;
    }
