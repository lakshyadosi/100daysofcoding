/**
 * @param {number[][]} nums1
 * @param {number[][]} nums2
 * @return {number[][]}
 */
// var mergeArrays = function(nums1, nums2) {
//     let num1Point = 0;
//     let num2Point = 0;
//     let result = [];

//     while(num1Point < nums1.length && num2Point <  nums2.length){
//         const [id1, val1] = nums1[num1Point];
//           const [id2, val2] = nums2[num2Point];
//         if(id1 == id2){
//             result.push([id1, val1 + val2])
//             num1Point++;
//             num2Point++;
//         }
//         else if(id1 < id2){
//               result.push([id1, val1])
//               num1Point++;
//         }
//         else if(id1 > id2){
//                result.push([id2, val2])
//               num2Point++;
//         }
//     }
//       while(num1Point < nums1.length){
//          result.push(nums1[num1Point]);
//          num1Point++;
//       }
//        while(num2Point < nums2.length){
//           result.push(nums2[num2Point]);
//          num2Point++;
//       }
//       return result;
//  };

 var mergeArrays = function(nums1, nums2) {
    const combinedValues = [...nums1, ...nums2];
    let myMap = new Map();
    for(const val of combinedValues){
        const [id, value] = val;
        myMap.set(id, (myMap.get(id) || 0) + value)
    }
     let sortedArray = Array.from(myMap).sort((a,b)=> a[0]-b[0]);

   return sortedArray;
}