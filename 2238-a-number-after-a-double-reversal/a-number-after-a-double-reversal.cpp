class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp = num;
        int revNum = 0;
        int revNum1 = 0;
        while(num>0){
            int ld = num%10;
            revNum = (revNum*10) + ld;
            num = num/10;
        }
        
        while(revNum>0){
            int ld1 = revNum%10;
            revNum1 = (revNum1*10) +ld1;
            revNum = revNum/10;
        }
        return revNum1 == temp;
    }
};