class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        map<int,int>mp;
        vector<int>ans;

        for(int i:nums)mp[i]++;

        for(auto jk:mp){
            pq.push({jk.second,jk.first});
        }

        while(k-- and !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
