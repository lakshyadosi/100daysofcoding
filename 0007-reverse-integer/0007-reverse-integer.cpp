class Solution {
public:
    int reverse(int number) {
        double reverseNumber = 0;
        while(abs(number) > 0){
        int lastDigit = number%10;
        reverseNumber = reverseNumber*10 + lastDigit;
        number = number/10;
        }
       if(reverseNumber < INT_MIN || reverseNumber > INT_MAX){
    return 0;}
        return reverseNumber;
    }
};