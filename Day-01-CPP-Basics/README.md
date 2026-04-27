# Day 1 — Environment + I/O + Data Types

## Phase 0: C++ Foundations & STL Mastery

---

## Problems Solved

| # | Problem | Platform | Difficulty | Quick Description | Approach Used | Doubts / Notes |
|---|---------|----------|------------|-------------------|---------------|----------------|
| 1 | Two Sum (LC 1) | LeetCode | Easy | Given array + target, find two indices whose values sum to target | Brute force O(n²) — two nested loops checking every pair | Asked about hashmap hint — not applicable on Day 1. Didn't know vectors, learned minimal survival: `nums[i]`, `nums.size()`, `return {i, j}` |
| 2 | Weird Algorithm (CSES) | CSES | Easy | Given n, if even → n/2, if odd → 3n+1, repeat until n=1, print sequence | Simple simulation with while loop | Submitted clean solution using template. Removed unnecessary `if(n>0)` guard. Learned `n /= 2` shorthand. |
| 3 | Palindrome Number (LC 9) | LeetCode | Easy | Check if an integer reads the same forwards and backwards | Reverse half the number, compare | No doubts |
| 4 | Reverse Integer (LC 7) | LeetCode | Medium | Reverse digits of a 32-bit int, return 0 on overflow | Build reversed number digit by digit, check overflow using long long | Covered in depth during Sub-topic 4 — overflow detection pattern |
| 5 | Sum of Two Integers (LC 2235) | LeetCode | Easy | Return sum of two given integers | Direct addition | No doubts |

---

## Key Doubts Asked During Session

| Doubt | Context | Resolution |
|-------|---------|------------|
| What does `all(v)` do in the template? | Saw `#define all(v) v.begin(), v.end()` in template | Explained it's a typing shortcut for STL functions like `sort()`. Full understanding deferred to Day 2 (vectors) and Day 4 (STL algorithms). |
| I don't know vectors, how do I solve LC 1? | LC 1 function signature forces `vector<int>` | Taught 3 survival facts: `nums[i]`, `nums.size()`, `return {i, j}`. Full vector coverage on Day 2. |
| How can I use hashmaps on Day 1? | Initial hint for LC 1 suggested hashmap | Corrected — hashmaps are Day 3/21. Gave brute force O(n²) approach instead. |
| What is modular arithmetic? | Mentioned negative mod quirk in Data Type Limits notes | Told student it's fully covered on Day 10. Only need to know C++ gives weird results with negative mod for now. |
