class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]){
            return 0;
        }else if(target > nums[nums.size()-1]){
            return nums.size();
        }
        
        int begin = 0;
        int end = nums.size()-1;
        int mid = begin + (end-begin)/2;
        while(end>begin){
            if(nums[mid] == target){
                return mid;   
            }else if(nums[mid] < target){
                begin = mid+1;
                mid = begin + (end-begin)/2;
            }else if(nums[mid] > target){
                end = mid;
                mid = begin + (end - begin)/2;
            }
        }
        return begin;
    }
};