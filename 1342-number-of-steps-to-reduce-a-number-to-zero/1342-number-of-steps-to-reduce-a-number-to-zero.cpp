class Solution {
public:
   int helper(int steps, int num){
      if(num == 0){
        return steps;
      }
      if(num%2 == 0){
       return helper(++steps, num/2);
      }
      else{
        return helper(++steps, num-1);
      }
   }
    int numberOfSteps(int num) {
        int steps = 0;
        return helper(steps, num);
    }
};