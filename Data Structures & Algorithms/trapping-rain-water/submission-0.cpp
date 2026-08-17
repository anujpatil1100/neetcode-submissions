class Solution {
public:
    int trap(vector<int>& heights) {
        int n=heights.size();
        vector<int>prefix(n,0);
        vector<int>sufix(n,0);

        int total=0;

        prefix[0]=heights[0];
        sufix[n-1]=heights[n-1];

        for(int i=1;i<n;i++){
           prefix[i]=max(prefix[i-1],heights[i]);
        }

        for(int j=n-2;j>=0;j--){
            sufix[j]=max(sufix[j+1],heights[j]);
        }


        for(int i=1;i<heights.size();i++){
            int leftsmx=prefix[i];
            int rightsmx=sufix[i];

            if(heights[i]<leftsmx and heights[i]<rightsmx){
                total+=min(leftsmx,rightsmx)-heights[i];
            }
        }

        return total;
    }
};
