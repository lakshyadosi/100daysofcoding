class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() -1 ;
        int inflationPoint = 0;
        for (int i=n; i>0;i--){
            if(nums[i] > nums[i-1]){
               inflationPoint = i;
               break;
            }
        }
        if(inflationPoint == 0){
            sort(nums.begin(), nums.end());
        }
        else{
         int numToSwap = nums[inflationPoint-1];
        
        for(int i= n; i>= inflationPoint; i--){
            if(nums[i] > numToSwap){
                swap(nums[inflationPoint-1], nums[i]);
                break;
            }
        }
        }
        sort(nums.begin()+inflationPoint, nums.end());
    }
};