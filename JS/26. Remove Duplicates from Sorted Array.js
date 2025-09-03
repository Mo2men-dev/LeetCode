/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
	let numSet = [];
	for (let i = 0; i < nums.length; i++) {
		if (!numSet.includes(nums[i])) numSet.push(nums[i]);
		else nums[i] = '_'
	}

	for (let i = nums.length; i >= 0; i--) {
		if (nums[i] === '_') nums.splice(i, 1);
	}
	return numSet.length;
};
