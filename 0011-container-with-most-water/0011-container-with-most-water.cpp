
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int size = height.size();
//         int maxArea = INT_MIN;
//         for(int i=0; i< size; i++){
//             for(int j=i+1; j < size; j++){
//                 int minDiff = min(height[j], height[i]);
//                 int area = (j-i) * minDiff;
//                 maxArea = max(area, maxArea);
//             }
//         }
//         return maxArea;
//   }
// };



class Solution {
public:
    int maxArea(vector<int>& height) {
       int size = height.size();
       int left = 0;
       int right = size -1;
       int maxArea = INT_MIN;
       while(left < right){
          int width = right - left;
          int minHeight = min(height[left], height[right]);
          int area = width * minHeight;
          maxArea = max(maxArea, area);
          if(height[left] < height[right]){
             left++;
          }
          else{
            right--;
          }

       }
       return maxArea;
  }
};