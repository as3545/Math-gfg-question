//Code
        int count=0;
        while(num!=1){
            if(num%3==0){
                count++;
                num=num/3;
            }
            else{
                count++;
                num=num-1;
            }
        }
        return count;
    }
