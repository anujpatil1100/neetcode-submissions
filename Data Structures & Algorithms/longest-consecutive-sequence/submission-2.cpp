class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;

        set<int>st;

        for(int i:nums)st.insert(i);

        nums.clear();

        for(int i:st)nums.push_back(i);

        //sort(nums.begin(),nums.end());

        int cnt=1;
        int ans=1;

        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1])==1){
                cnt++;
                ans=max(ans,cnt);
            }
            else{
                cnt=1;
            }
        }

        return ans;
    }
};
