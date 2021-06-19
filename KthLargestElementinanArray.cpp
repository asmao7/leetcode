class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*sort(nums.begin(), nums.end());
        return(nums[(nums.size()-k)]);*/ // this takes nlogn
        
        // O(n)
        priority_queue<int, vector<int>, greater<int> >q;
        for(int i: nums){
            q.push(i);
            if(q.size() > k){
                q.pop();
            }
        }
        return q.top();
    }
};