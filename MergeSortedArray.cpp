class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*int j = 0;
        for(int i=m; i<n+m; i++){
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(), nums1.end());*/ // takes O(n+m log(n+m))
        
        int p = n+m-1;
        int i = m-1; 
        int j=n-1;
        while(j >= 0){
            if(i>=0 && nums1[i] > nums2[j]){
                nums1[p] = nums1[i];
                i--;
            }else{
                nums1[p] = nums2[j];
                j--;
            }            
            p--;
        }
    }
};