class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>index;
        
        int start = 0;
        int end = numbers.size()-1;
        
        while(start <= end){
            if(numbers[start] + numbers[end] == target){
                index.push_back(start+1);
                index.push_back(end+1);
                return index;
            }else if(numbers[start] + numbers[end] < target){
                start++;
            }else if(numbers[start] + numbers[end] > target){
                end--;
            }
        }
        return index;
    }
};