class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(auto it: strs){
            string s = it;
            sort(s.begin(), s.end());
            m[s].push_back(it);
             }
             vector<vector<string>> v;
             for(auto pair : m){
                v.push_back(pair.second);
             }
             return v;
    }
    
};
