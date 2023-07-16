/?Code
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> v;
        for(int i=0;i<n;i++){
            v.insert(a[i]);
        } for(int j=0;j<m;j++){
            v.insert(b[j]);
        } return v.size();
       
}

};
