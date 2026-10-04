# Baseball Game

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/baseball-game/

## Approach

Use a stack to store the scores. `C` removes the last score, `D` doubles the last score, and `+` adds the previous two scores.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

1. Input: ["5","2","C","D","+"]  
   Output: 30

2. Input: ["5","-2","4","C","D","9","+","+"]  
   Output: 27

## Notes

A stack makes it easy to modify the most recent scores.