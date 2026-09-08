class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=-1;
        int no=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int r=*max_element(nums.begin()+0,nums.begin()+i+1);
            int l=*min_element(nums.begin()+i,nums.begin()+no-1+1);
            int score= r-l;
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};