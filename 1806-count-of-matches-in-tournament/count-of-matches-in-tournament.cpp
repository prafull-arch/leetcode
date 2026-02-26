class Solution {
public:
    int numberOfMatches(int n) {
        int cnt = 0;
        int total_m=0;
        while(n>1){
            if(n%2==0){
                total_m += n/2;
                n = n/2;
            }else{
                total_m += (n-1)/2;
                n = (n-1)/2 + 1;
            }
        }
        return total_m;
    }
};