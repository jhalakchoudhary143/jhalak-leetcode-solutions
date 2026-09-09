class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<1000) return 0;
        long long var=1000;
        while(n>=var){
            ans+=n-var+1;
            var*=1000;
        }

        return ans;
        
    }
};