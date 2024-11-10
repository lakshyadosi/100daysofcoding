class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int maxArea = INT_MIN;
        for(int i=0; i< size; i++){
            int minDiff = INT_MAX;
            for(int j=i+1; j < size; j++){
                minDiff = min(height[j], height[i]);
                int area = (j-i) * minDiff;
                maxArea = max(area, maxArea);
            }
        }
        return maxArea;
  }
    
};