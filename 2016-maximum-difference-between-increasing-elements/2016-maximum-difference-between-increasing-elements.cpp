class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int i=0;
     int result=-1;
     for(int j=1;j<n;j++){
        if(nums[j]>nums[i])
        {
            int diff= nums[j]-nums[i];
            result=max(diff,result);
                    }else{
                        i=j;
                    }

     }
     return result;
    }
};