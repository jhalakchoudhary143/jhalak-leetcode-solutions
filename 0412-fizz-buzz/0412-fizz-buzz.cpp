class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string> res;
    unordered_map<int,string> mp={{3,"Fizz"},{5,"Buzz"}};   
    vector<int> divide={3,5};
    for(int i=1;i<=n;i++)
    {
        string s="";
        for(int d:divide){
            if(i%d==0){
                s.append(mp[d]);
            }
            }
            if(s.empty()) {
                s.append(to_string(i));
        }
         res.push_back(s);
    } 
    return res;
    }
};