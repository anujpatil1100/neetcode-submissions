class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){

            if(matrix[i][0] <= target && target <= matrix[i][m-1]){
                vector<int>vt(matrix[i].begin(),matrix[i].end());

                int left=0;
                int j=vt.size()-1;

                while(left<=j){

                    int mid=(left+j)/2;
                    if(vt[mid]==target)return true;
                    else if(vt[mid]<target){
                        left=mid+1;
                    }
                    else{
                        j=mid-1;
                    }
                }

                return false;
            }
            else{
                continue;
            }
        }

        return false;
    }
};
