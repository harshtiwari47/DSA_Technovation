/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (arr) {
    const n = arr.length;
    const result = new Array(n).fill(0);

    let prefix = 1;

    for (let i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= arr[i];
    }

    let suffix = 1;

    for (let i = n - 1; i >= 0; i--) {
        result[i] = result[i] * suffix;
        suffix *= arr[i];
    }

    return result;
};
