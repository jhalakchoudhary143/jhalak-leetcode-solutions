class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> hashmap;
     for(string words:strs){
        string key=words;
        sort(key.begin(),key.end());
        hashmap[key].push_back(words);
     }   
     vector<vector<string>> result;
     for(auto &pairs:hashmap){
        result.push_back(pairs.second);
     }
     return result;
    }
};