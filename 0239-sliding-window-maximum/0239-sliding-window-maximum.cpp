class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int size = nums.size();
        deque<int> dq;
        int i=0;
        int j=0;

        while(j < size){
            while(!dq.empty() && dq.back() < nums[j]){
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                result.push_back(dq.front());
                if(nums[i] == dq.front()){
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return result;
    }
};