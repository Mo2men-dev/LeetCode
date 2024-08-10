# 2. Add Two Numbers

### Problem Statement

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

[Problem Link](https://leetcode.com/problems/add-two-numbers/)

### Solution

An intersing problem that we can solve using the same concepts we used in elementary math by carrying the 1 if the sum is greater than 9, and we loop until the end of the larger list and `carry` is equal to 0.

### Complexity Analysis

The time complexity for this solution is `O(n))` where `n` represents the length of the larger list of `l1` and `l2`.
The space complexity for this solution is `O(1)`.