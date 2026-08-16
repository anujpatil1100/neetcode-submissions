class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;

        for(int i:nums){
            mp[i]++;
        }

        for(auto jk:mp){
            if(jk.second>1)return true;
        }

        return false;
    }
};