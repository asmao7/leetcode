class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>v;
        for(auto i: nums){
            if(find(v.begin(), v.end(), i) != v.end()){
                return true;
            }else{
                v.push_back(i);
            }
        }
        return false;
    }
};