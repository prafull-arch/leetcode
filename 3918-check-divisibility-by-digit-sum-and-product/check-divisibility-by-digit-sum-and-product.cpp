class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int product = 1;
        int output = 0;
        while(n>0){
            int ld= n%10;
            n /= 10;
            sum +=ld;
            product *= ld;
        }
        output = sum+product;
        return(temp%output==0);
    }
};