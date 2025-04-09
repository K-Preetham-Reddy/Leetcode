/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let re=init;
    for(let i=0;i<nums.length;i++){
        re=fn(re,nums[i]);
    }
    return re;
};