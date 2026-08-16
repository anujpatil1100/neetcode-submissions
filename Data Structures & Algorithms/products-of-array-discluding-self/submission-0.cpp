class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int zero=0;
       int zeroi=-1;
       vector<int>ans(nums.size(),0);

       long long pro=1;

       for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero++;
            zeroi=i;
        }
        else{
            pro*=nums[i];
        }

       }

       if(zero>1)return ans;
       if(zero==1){
        ans[zeroi]=(int)pro;
        return ans;
       }

       for(int i=0;i<nums.size();i++){
        ans[i]=(int)pro/nums[i];
       }

       return ans;
    }
};
