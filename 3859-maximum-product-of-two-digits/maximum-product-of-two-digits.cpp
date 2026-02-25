class Solution {
public:
    int maxProduct(int n) {
        int ld = 0;
        int a =0;
        int b=0;
        int product =1;
        if(n==0) return false;
        while(n>0){
            ld = n%10;
            n /=10;
            if(ld>a){
                b=a;
                a=ld;
            }
                else if(ld>b){
                    b=ld;
                }
            
        }
        
        return a*b;
    }
    
};