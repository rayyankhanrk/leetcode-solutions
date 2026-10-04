# Valid Anagram

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

Count the frequency of each letter in both strings. If all counts are zero after comparing them, the strings are anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

1. Input: s = "anagram", t = "nagaram"  
   Output: true

2. Input: s = "rat", t = "car"  
   Output: false

## Notes

The solution checks the frequency of each lowercase letter.