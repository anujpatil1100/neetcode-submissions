class Solution {
public:

int solve(vector<int>& piles, int sub){

    double ans=0;

    for(int k:piles){
        ans+=ceil((double)k/(double)sub);
    }

    return (int)ans;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int i=1;
        int j=*max_element(piles.begin(),piles.end());

        while(i<=j){

            int mid=(i+j)/2;

            if(solve(piles,mid)<=h){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }

        return i;
    }
};
