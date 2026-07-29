class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n!=m){
            return false;
        }
        unordered_map<char, int> m1,m2;
        for(int i = 0;i<n; i++){
            m1[s[i]]++;
        }
         for(int i = 0;i<m; i++){
            m2[t[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
        }
        return true;
    //    int i = 0, j = 0;
    //    while(i<n && j<m){
    //     if(s[i])
    //    }
        
    }
};
