class Solution {
public:
    bool isVowel(char &ch){
        if(ch == 'a' ||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u' ||
        ch == 'A' ||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
            return true;
        }
        return false;
    }
  
    string reverseVowels(string s) {
       int n = s.length();
       int start = 0;
       int end = n-1;
       while(start <= end){
         if(!isVowel(s[start])){
            start++;
         }
         else if(!isVowel(s[end])){
            end--;
         }
         else{
         swap(s[start], s[end]);
         start++;
         end--; 
         }
       }
       return s;
    }
};