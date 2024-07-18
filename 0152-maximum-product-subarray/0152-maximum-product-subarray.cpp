class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double pre = 1;
        double suff = 1;
        double ans = nums[0];
        for(int i=0; i< n;i++){
            if(pre == 0){
                pre =1;
            }
            if(suff == 0){
                suff = 1;
            }
            pre = pre * nums[i];
            suff = suff * nums[n-1 -i];
            ans = max(ans, max(pre, suff));
        }
        return (int)ans;
    }
};