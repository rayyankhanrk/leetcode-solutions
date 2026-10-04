# Reverse Linked List

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/reverse-linked-list/

## Approach

Use three pointers: previous, current, and next. Reverse each link one by one until the list is reversed.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

1. Input: [1,2,3,4,5]  
   Output: [5,4,3,2,1]

2. Input: []  
   Output: []

## Notes

The links are reversed without creating a new linked list.