/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function(s, k) {
    let i = 0; 
    let j = 0; 
    let myMap = new Map();
    let maxFreq = 0;
    let maxLen = -Infinity;

    while(j < s.length){
       myMap.set(s[j], (myMap.get(s[j]) || 0) +1);
       if(myMap.get(s[j]) > maxFreq){
        maxFreq = myMap.get(s[j]);
       }        
       while((j-i+1) - maxFreq > k){
           myMap.set(s[i], myMap.get(s[i]) -1);
           i++;
       }
       maxLen = Math.max(maxLen, j-i+1);
       j++;
    }

    return maxLen;
};