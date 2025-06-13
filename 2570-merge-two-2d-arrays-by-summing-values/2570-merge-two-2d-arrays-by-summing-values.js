/**
 * @param {number[][]} nums1
 * @param {number[][]} nums2
 * @return {number[][]}
 */
var mergeArrays = function(nums1, nums2) {
    let num1Point = 0;
    let num2Point = 0;
    let result = [];

    while(num1Point < nums1.length && num2Point <  nums2.length){
        if(nums1[num1Point][0] === nums2[num2Point][0]){
            result.push([nums1[num1Point][0], nums1[num1Point][1] + nums2[num2Point][1]])
            num1Point++;
            num2Point++;
        }
        else if(nums1[num1Point][0] < nums2[num2Point][0]){
              result.push([nums1[num1Point][0], nums1[num1Point][1]])
              num1Point++;
        }
        else if(nums1[num1Point][0] > nums2[num2Point][0]){
              result.push([nums2[num2Point][0], nums2[num2Point][1]])
              num2Point++;
        }
    }
      while(num1Point < nums1.length){
         result.push([nums1[num1Point][0], nums1[num1Point][1]]);
         num1Point++;
      }
       while(num2Point < nums2.length){
         result.push([nums2[num2Point][0], nums2[num2Point][1]]);
         num2Point++;
      }
      return result;
 };