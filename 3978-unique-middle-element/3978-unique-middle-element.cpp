class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
         int n = nums.size();
        int mid = n / 2;  // 
        int middleElement = nums[mid];
        
        int count = 0;
        for (int x : nums) {
            if (x == middleElement) count++;
        }
        
        return count == 1;
    
      
    }
};