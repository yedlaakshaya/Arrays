class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //size declare
        int n=nums1.size()+nums2.size();
        //sort the array because the merge will expect that the array is already sorted
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        //mergeing to find the median
        vector<int> merged(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());

    if(n%2!=0){
        return merged[n/2];
    }else{
        return (merged[n/2]+merged[n/2-1])/2.0;
    }
        
    }
};