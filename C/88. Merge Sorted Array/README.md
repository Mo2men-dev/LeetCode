# 88. Merge Sorted Array

### Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

**Merge** `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

[Problem Link](https://leetcode.com/problems/merge-sorted-array/)

### Solution

This is a relatively simple problem. The only thing to keep in mind is that we have to merge the two arrays in-place. This means that we have to start from the end of the two arrays and keep filling the `nums1` array from the end. This way we don't have to worry about overwriting any elements in the `nums1` array. After we have merged the two arrays, we can sort the `nums1` array to get the final result. I have decided to use *Bubble Sort* to sort the array. The time complexity of this solution is `O(n^2)`.

### Complexity Analysis

The time complexity for this solution is `O(n^2)`.
The space complexity for this solution is `O(1)`.