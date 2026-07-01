class Solution {
public:
    string largestOddNumber(string num) {
        int inx=-1;
        int i;
        for(i=num.length()-1;i>=0;i--)
        {
            if((num[i]-'0')%2==1)//odd hua 
            {
                inx=i;
                break;
            }
        }
        i=0;
        while(i<=inx && num[i]=='0')i++;
        return num.substr(i,inx-i+1);
    }
};