//Code
 vector<int>ans;
        bool prime[N+1]={0};
        for(int i=2;i<=N;i++){
            if(prime[i]==false){
                for(int j=i*i;j<=N;j+=i){
                    prime[j]=true;
                }
            }
        }
        for(int i=2;i<=N;i++){
            if(prime[i]==false){
                ans.push_back(i);
            }
        } return ans;
    }
