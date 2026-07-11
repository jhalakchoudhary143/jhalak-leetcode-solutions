class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,ss=0;
       while(n>0){
        int number=n%10;
        sum=sum+number;
        ss= ss+ (number*number);
        n/=10;
       }
       if(ss-sum>=50) return true;

       return false;
    }
};