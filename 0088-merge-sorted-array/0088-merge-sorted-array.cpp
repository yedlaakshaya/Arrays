class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    int sortedarr1 = n-1;
    int sortedarr2 = 0;
    while(sortedarr1>=0 && sortedarr2<m)
    {
        if(nums1[sortedarr1]>nums2[sortedarr2]){
            swap(nums1[sortedarr1],nums2[sortedarr2]);
            sortedarr1--;
            sortedarr2++;
        }
        else{
            break;
        }
    }
    sort(nums1.begin(), nums1.begin() + n);
    sort(nums2.begin(), nums2.begin() + m);

for(int i=0;i<m;i++){
    nums1[n+i]=nums2[i];
}
        
    }
};