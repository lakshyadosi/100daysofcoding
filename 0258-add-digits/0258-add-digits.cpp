class Solution {
public:
    int addDigits(int number) {
        int sum = 0;
        int count = 0;
       while(number){
          int lastDigit = number %10;
          count ++;
          sum = sum + lastDigit;
          number = number/10;
       }
       if(count > 1){
        addDigits(sum);
       } 
       return count;
    }

};