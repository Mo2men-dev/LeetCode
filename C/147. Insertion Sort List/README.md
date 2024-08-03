# 147. Insertion Sort List


### Problem Statement

Given the head of a singly linked list, sort the list using **insertion sort**, and return the sorted list's head.

The steps of the **insertion sort** algorithm:

1. Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.

2. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
3. It repeats until no input elements remain.

The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

[Problem Link](https://leetcode.com/problems/insertion-sort-list)

### Solution

This was fairly easy to implement. I just had to iterate through the linked list and insert the current node in the correct position in the sorted list. I have used a dummy node to keep track of the head of the sorted list, And a pointer to keep track of the last node in the sorted list. I used a while loop to iterate through the linked list, and another while loop to find the correct position to insert the current node into. Finally we inserte the current node in the correct position. The time complexity of this solution is `O(n^2)`.

### Complexity Analysis

The time complexity for this solution is `O(n^2)`.
The space complexity for this solution is `O(1)`.