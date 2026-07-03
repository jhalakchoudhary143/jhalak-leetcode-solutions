class Solution {
public:
    int maxDepth(string s) {
     int level = 0, maxLevel = 0;
        for (auto ch : s) {
            if (ch == '(') {
                level++;
                maxLevel = max(maxLevel, level);
            } else if (ch == ')') {
                level--;
            }
        }
        return maxLevel;
    }
};