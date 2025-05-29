/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
   let myMap = new Map();
   
   for(let ch of s){
      myMap.set(ch, (myMap.get(ch) || 0) + 1)
   }

   for(let ch of t){
    if(myMap.has(ch) == false){
        return false;
    }
     if(myMap.has(ch)){
        myMap.set(ch, myMap.get(ch) -1);
        if(myMap.get(ch) == 0){
            myMap.delete(ch);
        }
     }
   }

   if(myMap.size == 0){
      return true;
   }
   else{
    return false;
   }
};