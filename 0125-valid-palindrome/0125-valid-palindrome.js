/**
 * @param {string} s
 * @return {boolean}
 */

function isAlphanumericChar(char) {
  return /^[a-zA-Z0-9]$/.test(char);
}
var isPalindrome = function(s) {
  const input = s.replace(/[^a-zA-Z0-9]/g,"").toLowerCase();
  let left = 0;
  let right = input.length - 1;

  while(left < right){
     if(input[left] != input[right]){
        return false;
     }
     left++;
     right--;
  }
  return true;
};

/*
Time Complexity = O(n)
Space complexity = O(n)
*/