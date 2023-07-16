//Code
long long sumOfSeries(long long N) {
       long long s=0;
        while(N!=0){
            s+=N*N*N;
            N--;
        }
        return s;
    }
