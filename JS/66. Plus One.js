/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
	const lastIndx = digits.length - 1;
	let carry = 0;
	
	for (let i = lastIndx; i >= 0; i--) {
		const result = digits[i] + 1;
		if (result > 9) {
			digits[i] = result % 10;
			carry = 1
		} else {
			digits[i] = result;
			carry = 0;
			break;
		}
	}

	if (carry === 1) digits.unshift(1);

	return digits;
};
