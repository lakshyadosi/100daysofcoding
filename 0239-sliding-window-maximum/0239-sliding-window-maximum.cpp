class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int windowSize) {
        vector<int> maxValues; // Stores the maximum of each sliding window
        int n = nums.size();
        deque<int> deq; // Deque to store indices of elements in the current window
        int left = 0; // Start of the sliding window
        int right = 0; // End of the sliding window

        // Traverse through the array
        while (right < n) {
            // Remove elements from the back of the deque that are smaller than the current element
            // as they are no longer useful for finding the maximum in this window
            while (!deq.empty() && nums[deq.back()] < nums[right]) {
                deq.pop_back();
            }

            // Add the current element's index to the deque
            deq.push_back(right);

            // Check if the current window has reached the desired size
            if (right - left + 1 < windowSize) {
                right++; // Expand the window by moving the end pointer
            } 
            else if (right - left + 1 == windowSize) {
                // If the window size matches the required window size
                // The element at the front of the deque is the maximum for the current window
                maxValues.push_back(nums[deq.front()]);

                // If the element at the start of the window is the maximum, remove it from the deque
                if (nums[left] == nums[deq.front()]) {
                    deq.pop_front();
                }

                // Slide the window forward
                left++;
                right++;
            }
        }
        return maxValues;
    }
};
