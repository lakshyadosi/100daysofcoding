class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int minLenWindow = INT_MAX;
        int currentSum = 0;
        int low = 0;

        for (int high = 0; high < nums.size(); ++high) {
            // Increase window size by adding current element to current sum
            currentSum += nums[high];

            // Try to reduce the window size
            while (currentSum >= target) {
                int currentWindowSize = high - low + 1;

                // Update minimum length of window
                minLenWindow = std::min(minLenWindow, currentWindowSize);

                currentSum -= nums[low];
                low++;
            }
        }

        return minLenWindow == INT_MAX ? 0 : minLenWindow;
    }
};