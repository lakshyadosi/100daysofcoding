class Solution {
public:
    bool isPalindrome(int x) {
        int originalNumber = x;
        double reverseNumber = 0;
        while(x > 0){
            int lastDigit = x%10;
            reverseNumber = reverseNumber * 10 + lastDigit;
            x = x/10;
        }
        if(originalNumber == reverseNumber){

            return true;
        }
        return false;
    }
};