class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        for (string &word : words) {
            if (!result.empty()) {
                string prev = result.back();
                string sortedPrev = prev, sortedCurr = word;
                sort(sortedPrev.begin(), sortedPrev.end());
                sort(sortedCurr.begin(), sortedCurr.end());
                if (sortedPrev == sortedCurr) {
                    continue; 
                }
            }
            result.push_back(word);
        }
        return result;
    }
};