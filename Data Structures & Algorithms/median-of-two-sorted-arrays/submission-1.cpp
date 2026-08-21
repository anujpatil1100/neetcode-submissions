class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vt;

        int i=0;
        int j=0;

        int n=nums1.size();
        int m=nums2.size();

        while(i<n and j<m){
            
            if(nums1[i]<=nums2[j]){
                vt.push_back(nums1[i]);
                i++;
            }
            else{
                vt.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n){
            vt.push_back(nums1[i]);
            i++;
        }

        while(j<m){
            vt.push_back(nums2[j]);
            j++;
        }

        if(vt.size()%2!=0)return (double)vt[vt.size()/2];

        return (double)(vt[(vt.size()/2)-1]+vt[vt.size()/2])/2;
    }
};
