//Code
int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B and B>C){
        return B; }
        if(B>C and C>A) {
        return C; }
        if(C>A and A>B){
        return A; }
        if(C>B and B>A){
            return B;
        }
        if(A>C and C>B){
            return C;
        }
        if(B>A and A>C){
            return A;
        }
    }
