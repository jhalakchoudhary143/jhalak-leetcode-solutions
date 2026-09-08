class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
       int no=n-1000;
        return no+1;
    }
};