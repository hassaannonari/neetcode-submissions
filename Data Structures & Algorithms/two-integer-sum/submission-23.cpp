class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> m;
        int i = 0;
        int j = nums.size()-1;
    for(int x = 0; x<nums.size(); x++){
         m.push_back({nums[x],x});
    }
        sort(m.begin(), m.end());
        while(i<j){
            if(((m[i].first +m[j].first)==target)){
                return {min(m[i].second,m[j].second), max(m[i].second,m[j].second)};
            }else if((m[j].first +m[i].first)>target){
                    j--;
            }else{
                i++;
            }
        }
        return {};
    }
};
