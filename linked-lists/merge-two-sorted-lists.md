# Merge Two Sorted Lists

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/merge-two-sorted-lists/

## Approach

Compare the first nodes of both sorted lists and repeatedly attach the smaller node to the result list.

## Time Complexity

O(n + m)

## Space Complexity

O(1)

## Test Cases

1. Input: list1 = [1,2,4], list2 = [1,3,4]  
   Output: [1,1,2,3,4,4]

2. Input: list1 = [], list2 = []  
   Output: []

## Notes

The original nodes are reused instead of creating a new list.