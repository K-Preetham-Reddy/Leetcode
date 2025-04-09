/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let re=arr;
    for(let i=0;i<arr.length;i++){
        re[i]=fn(arr[i],i);
    }
    return re;
};