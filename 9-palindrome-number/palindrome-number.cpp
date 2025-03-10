class Solution {//i
public:
int reverse(int x) {
        int revNum=0;
        while(x!=0){
            int digit = x%10;
            if(revNum < INT_MIN/10 || revNum>INT_MAX/10) return 0; //Checking for runtime error
            revNum = (revNum*10) + digit;
            x=x/10;
        }
        return revNum;
    }//mod
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        return x==reverse(x);
    }
};