//Code
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    { vector<long long> v;
        long long s=0,e=1,sum=0;
        v.push_back(e);
        n--;
        while (n!=0){
            sum=s+e;
            v.push_back(sum);
            s=e;
            e=sum;
            
            n--;
        }
        return v;
    }
};
