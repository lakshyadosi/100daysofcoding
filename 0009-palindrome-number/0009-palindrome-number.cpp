class Solution {
public:
    bool isPalindrome(int number) {
        int originalNumber = number;
        double reverseNumber = 0;
        while(number > 0){
            int lastDigit = number%10;
            reverseNumber = reverseNumber * 10 + lastDigit;
            number = number/10;
        }
        if(originalNumber == reverseNumber){

            return true;
        }
        return false;
    }
};
