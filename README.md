# 120-DAY DSA DOMINATION CURRICULUM
### From Zero to Cracking Any Interview, OA, or Contest on Earth
#### 1000 Problems | 5 Problems/Day | LeetCode + CSES Focus

---

# PHASE 0: C++ FOUNDATIONS & STL MASTERY (Days 1–7)

> **Goal:** Rock-solid C++ fundamentals. This phase stays intact — it's your weapon for everything ahead.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 1 | Environment + I/O + Data Types | C++ environment setup, Fast I/O (`ios_base::sync_with_stdio(false); cin.tie(NULL)`), `'\n'` vs `endl`, Data type limits (`int` ~2×10⁹, `long long` ~9×10¹⁸), Integer overflow detection, `#define int long long` trick, DSA template | LC 1, CSES Weird Algorithm, LC 9, LC 7, LC 2235 |
| 2 | STL Sequence Containers | `vector<T>` (init, push_back, resize vs reserve), 2D vectors, `string` (substr, find, stoi, stoll), `pair` and `tuple`, `deque` front/back ops | LC 1929, LC 14, LC 28, LC 58, LC 412 |
| 3 | STL Associative Containers | `set`, `multiset`, `map`, `multimap`, `unordered_set/map`, Custom comparators, Time complexities (O(log n) vs O(1)) | LC 217, LC 219, LC 349, LC 350, CSES Distinct Numbers |
| 4 | STL Algorithms Part 1 | `sort()` with lambdas, `stable_sort()`, `reverse()`, `unique()`, `binary_search()`, `lower_bound()`, `upper_bound()`, `accumulate()` | LC 88, LC 242, LC 169, LC 229, LC 268 |
| 5 | STL Algorithms Part 2 + Iterators | `next_permutation()`, `__builtin_popcount()`, `__builtin_clz/ctz()`, `nth_element()`, Iterator arithmetic (`next`, `prev`, `advance`) | LC 31, LC 556, LC 384, LC 215, CSES Permutations |
| 6 | Advanced STL | `priority_queue` (min/max heap), `stack`, `queue`, `bitset`, Ordered set concept (`find_by_order`, `order_of_key`) | LC 239, LC 20, LC 155, LC 225, CSES Concert Tickets |
| 7 | C++ Tricks + Mini Contest | Lambdas, `auto`, range-based for, structured bindings, `emplace_back`, pass by reference, common bugs. **SELF-TEST: 5 problems in 2 hrs** | LC 1480, LC 1470, LC 1431, LC 1512, LC 771 |

---

# PHASE 1: MATHEMATICS FOR DSA (Days 8–18)

> **Goal:** Math is the backbone. This phase is UNTOUCHED — every single topic stays. You love it, you master it.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 8 | Number Theory Basics | Prime check O(√n), Sieve of Eratosthenes, SPF sieve, Prime factorization, Counting/sum of divisors | CSES Counting Divisors, CSES Common Divisors, LC 204, LC 263, LC 264 |
| 9 | GCD, LCM, Euclidean | `__gcd()`, Extended Euclidean Algorithm, Bézout's identity, Modular inverse via ExtGCD, GCD/LCM of arrays | CSES Josephus Problem I, LC 365, LC 1071, LC 1979, LC 2543 |
| 10 | Modular Arithmetic | Mod properties, Modular add/sub/mul, Binary exponentiation, Fermat's Little Theorem, Modular inverse, Modular division | CSES Exponentiation, CSES Exponentiation II, LC 50, LC 372, LC 1922 |
| 11 | Combinatorics Part 1 | Factorial precomputation, nCr mod p, Pascal's Triangle, nPr, Binomial properties | CSES Binomial Coefficients, CSES Creating Strings I, LC 62, LC 118, LC 119 |
| 12 | Combinatorics Part 2 | Inclusion-Exclusion, Derangements, Stars and Bars, Catalan Numbers, Pigeonhole Principle | CSES Distributing Apples, CSES Bracket Sequences I, LC 96, LC 22, LC 1359 |
| 13 | Bit Manipulation | AND/OR/XOR/NOT/shifts, Check/set/clear/toggle bit, Power of 2 check, `__builtin_popcount`, XOR properties, Subset iteration | CSES Bit Strings, LC 136, LC 137, LC 260, LC 191 |
| 14 | Bit Manipulation Advanced | Bitmask DP intro, All subsets iteration, XOR basis intro, Meet in middle concept, Gray code | CSES Apple Division, LC 78, LC 90, LC 338, LC 461 |
| 15 | Math Problem Solving | Mixed Number Theory + Combinatorics problems, Pattern recognition | LC 1492, LC 2709, CSES Sum of Divisors, LC 279, LC 343 |
| 16 | Matrices + Linear Recurrence | Matrix multiplication, Matrix exponentiation O(log n), Fibonacci via matrix, Converting recurrence to matrix | CSES Fibonacci Numbers, LC 509, LC 1137, LC 70, LC 1220 |
| 17 | Probability + Expected Value | Basic probability, Expected value, Linearity of expectation, Geometric distribution, Coupon collector | LC 808, LC 688, LC 837, LC 1227, LC 470 |
| 18 | Math Revision + Self-Test | Revision, Formula sheet creation, **TIMED PRACTICE: 5 mixed math problems** | 5 previously unsolved problems from Days 8–17 |

---

# PHASE 2: ARRAYS & FUNDAMENTAL TECHNIQUES (Days 19–32)

> **Goal:** Master the bread-and-butter patterns that appear in 60%+ of interview problems.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 19 | Arrays Fundamentals | Prefix sum 1D, Suffix sum, Difference array, Range queries O(1), Range updates O(1) | CSES Static Range Sum Queries, LC 303, LC 560, LC 238, LC 724 |
| 20 | 2D Prefix Sum | 2D prefix construction, 2D range query formula, 2D difference array | CSES Forest Queries, LC 304, LC 1314, LC 1292, LC 221 |
| 21 | Hashing Patterns | Hash maps for frequency, Two sum pattern, Group anagrams, Longest consecutive sequence, Subarray sum equals K | LC 1, LC 49, LC 128, LC 560, LC 523 |
| 22 | Two Pointers Part 1 | Same direction, Opposite direction, Two sum sorted, Three sum, Container with most water | CSES Sum of Two Values, LC 167, LC 15, LC 11, LC 16 |
| 23 | Two Pointers Part 2 | Merge sorted arrays, Intersection/union, Trapping rain water, Dutch National Flag, Remove duplicates | CSES Sum of Three Values, LC 42, LC 75, LC 977, LC 26 |
| 24 | Sliding Window Part 1 | Fixed-size window, Max/min in window, Count distinct in window, Max sum subarray size k, Anagram matching | LC 643, LC 438, LC 567, LC 1004, LC 1876 |
| 25 | Sliding Window Part 2 | Variable-size window, Min window substring, Longest substring without repeat, Longest repeating char replacement | LC 3, LC 76, LC 424, LC 209, LC 1658 |
| 26 | Binary Search Part 1 | Binary search, Lower/upper bound, First/last occurrence, Rotated array search, Peak element | CSES Apartments, LC 704, LC 34, LC 33, LC 162 |
| 27 | Binary Search Part 2 | Binary search on answer, Min pages allocation, Aggressive cows, Koko bananas, Split array largest sum | CSES Factory Machines, CSES Array Division, LC 875, LC 1011, LC 410 |
| 28 | Binary Search Part 3 | BS on real numbers, BS + greedy, BS on 2D matrix, Median of two sorted arrays | LC 74, LC 240, LC 378, LC 4, LC 1283 |
| 29 | Sorting Deep Dive | Merge sort, Quick sort, Counting sort, Radix sort, Custom comparators, Inversion count | CSES Distinct Numbers, LC 912, LC 148, LC 315, LC 493 |
| 30 | Greedy Part 1 | Activity selection, Interval scheduling, Fractional knapsack, Job sequencing, Minimum platforms | CSES Movie Festival, CSES Tasks and Deadlines, LC 435, LC 452, LC 253 |
| 31 | Greedy Part 2 | Jump game, Gas station, Candy distribution, Task scheduler, Assign cookies | LC 55, LC 45, LC 134, LC 135, LC 621 |
| 32 | Intervals Pattern Day | Merge intervals, Insert interval, Non-overlapping intervals, Meeting rooms I/II, Interval list intersections | LC 56, LC 57, LC 435, LC 252, LC 986 |

---

# PHASE 3: RECURSION & BACKTRACKING (Days 33–40)

> **Goal:** Build the recursive muscle — this is the foundation for Trees, Graphs, and DP.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 33 | Recursion Fundamentals | Base case, Recursive leap of faith, Factorial, Fibonacci, Power, Print 1-N/N-1 | LC 509, LC 231, LC 326, LC 342, LC 344 |
| 34 | Recursion on Arrays/Strings | Check sorted, Linear search, Reverse array/string, Palindrome check, String permutations | LC 344, LC 125, LC 541, LC 917, LC 394 |
| 35 | Recursion: Subsequences | Print all subsequences, Subsequences with sum K, Pick/not-pick pattern, Power set | CSES Apple Division, LC 78, LC 90, LC 416, LC 698 |
| 36 | Backtracking Fundamentals | N-Queens, Sudoku solver, Rat in maze, Permutations generation | LC 46, LC 47, LC 51, LC 37, CSES Chessboard and Queens |
| 37 | Backtracking Part 2 | Combination sum I/II/III, Palindrome partitioning, Letter combinations, Word search | LC 39, LC 40, LC 216, LC 131, LC 79 |
| 38 | Backtracking Part 3 | Generate parentheses, Restore IP, Expression operators, M-coloring, Subsets with dup | LC 22, LC 93, LC 282, LC 17, CSES Grid Paths |
| 39 | Recursion to DP Thinking | Overlapping subproblems, Memoization intro, Pruning techniques, Recursion tree visualization | LC 70, LC 198, LC 322, LC 139, LC 377 |
| 40 | Self-Test Day | **TIMED PRACTICE: 5 backtracking problems in 2.5 hrs** | 5 unsolved problems from LC Backtracking tag |

---

# PHASE 4: LINKED LISTS, STACKS, QUEUES & HEAPS (Days 41–50)

> **Goal:** Nail the classic DS interview favorites. These are asked EVERYWHERE.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 41 | Linked List Fundamentals | Node structure, Insert/delete head/tail/middle, Traversal, Reverse (iterative + recursive) | LC 206, LC 21, LC 83, LC 203, LC 237 |
| 42 | Linked List Part 2 | Floyd's cycle detection, Find cycle start, Middle element, Nth from end, Intersection point | LC 141, LC 142, LC 160, LC 876, LC 19 |
| 43 | Linked List Part 3 | Reverse in K groups, Merge K sorted lists, Clone with random pointer, Add two numbers, Palindrome LL | LC 25, LC 23, LC 138, LC 2, LC 234 |
| 44 | Stacks Part 1 | Balanced parentheses, Stock span, Next greater/smaller element, Monotonic stack pattern | CSES Nearest Smaller Values, LC 20, LC 496, LC 503, LC 739 |
| 45 | Stacks Part 2 | Largest rectangle histogram, Maximal rectangle, Min stack, Evaluate RPN, Simplify path | LC 84, LC 85, LC 155, LC 150, LC 71 |
| 46 | Monotonic Stack/Queue Mastery | Daily temperatures, Online stock span, Sum of subarray minimums, Trapping rain (stack), Sliding window max | LC 739, LC 901, LC 907, LC 42, LC 239 |
| 47 | Queues and Deques | Circular queue, Sliding window max (deque), First negative in window, Design hit counter | LC 622, LC 239, LC 225, LC 232, LC 362 |
| 48 | Heaps / Priority Queues Part 1 | Min/max heap operations, Kth largest/smallest, Sort nearly sorted array, Top K frequent elements | CSES Room Allocation, LC 215, LC 347, LC 692, LC 378 |
| 49 | Heaps Part 2 | Merge K sorted lists (heap), Median from data stream, Reorganize string, K closest points, Task scheduler | LC 23, LC 295, LC 767, LC 973, LC 621 |
| 50 | Design DS Day | LRU Cache, LFU Cache, Min Stack, Stack using Queues, Design Twitter | LC 146, LC 460, LC 155, LC 225, LC 355 |

---

# PHASE 5: TREES (Days 51–63)

> **Goal:** Trees are the backbone of interviews. Master traversals → BST → advanced patterns.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 51 | Binary Tree Fundamentals | Inorder/preorder/postorder (recursive), Level order, Height, Count nodes/leaves | LC 144, LC 94, LC 145, LC 102, LC 104 |
| 52 | Binary Tree Part 2 | Iterative traversals, Morris traversal, Diameter, Balanced check, Symmetric tree | LC 543, LC 110, LC 101, LC 226, LC 572 |
| 53 | Binary Tree Part 3 | Left/Right/Top/Bottom view, Zigzag level order, Vertical order traversal, Width of binary tree | LC 199, LC 103, LC 987, LC 662, LC 297 |
| 54 | Binary Tree Part 4 | LCA, Path sum I/II/III, Root-to-leaf paths, Max path sum, Construct from traversals | LC 236, LC 112, LC 113, LC 437, LC 124 |
| 55 | Binary Tree Part 5 | Construct from inorder+preorder, Construct from inorder+postorder, Serialize/Deserialize, Flatten to LL | LC 105, LC 106, LC 297, LC 114, LC 116 |
| 56 | Binary Search Tree Part 1 | BST property, Search/Insert/Delete, Min/max, Validate BST, Kth smallest, Inorder successor | LC 700, LC 701, LC 450, LC 98, LC 230 |
| 57 | BST Part 2 | Floor/Ceil in BST, Two sum BST, Recover BST, BST iterator, Count BSTs (Catalan) | LC 653, LC 99, LC 173, LC 96, LC 95 |
| 58 | N-ary Trees + Trie Intro | N-ary representation, Traversals, Trie insert/search/prefix, Design autocomplete | CSES Subordinates, LC 429, LC 208, LC 211, LC 648 |
| 59 | Trie Mastery | Word search II, Replace words, Max XOR of two numbers, Longest word in dictionary | LC 212, LC 648, LC 421, LC 720, LC 1268 |
| 60 | Tree on Graph (CP Style) | Adjacency list tree, DFS on tree, Subtree size, Tree diameter, Tree center | CSES Tree Diameter, CSES Tree Distances I, CSES Tree Distances II, CSES Subordinates, LC 310 |
| 61 | Tree DP | Subtree DP, Max independent set, Tree matching, Rerooting technique | CSES Tree Matching, CSES Tree Distances II, LC 337, LC 834, LC 968 |
| 62 | LCA Techniques | LCA parent pointers, Binary lifting O(log n), Distance queries using LCA | CSES Company Queries I, CSES Company Queries II, CSES Distance Queries, LC 1483, LC 236 |
| 63 | Trees Self-Test | **TIMED PRACTICE: 5 tree problems in 2.5 hrs** | 5 unsolved from LC Trees/BST tags |

---

# PHASE 6: GRAPHS (Days 64–82)

> **Goal:** Graphs are the KING of hard interview problems. Every pattern, every algorithm, drilled.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 64 | Graph Representation + BFS/DFS | Adjacency matrix vs list, Edge list, DFS traversal, BFS traversal, Connected components | CSES Counting Rooms, CSES Building Roads, LC 200, LC 547, LC 733 |
| 65 | DFS Deep Dive | DFS on grid, Flood fill, Number of islands, Surrounded regions, Pacific Atlantic | LC 200, LC 695, LC 733, LC 130, LC 417 |
| 66 | BFS Deep Dive | Shortest path unweighted, Multi-source BFS, Rotten oranges, 01 Matrix, Walls and gates | CSES Labyrinth, LC 994, LC 542, LC 286, LC 1091 |
| 67 | Cycle Detection | Cycle undirected (DFS/BFS), Cycle directed (coloring), Finding the cycle, Redundant connection | CSES Round Trip, CSES Round Trip II, LC 207, LC 684, LC 685 |
| 68 | Topological Sort | DAG concept, Topo sort DFS, Kahn's algorithm (BFS), Course schedule I/II, Alien dictionary | CSES Course Schedule, CSES Longest Flight Route, LC 207, LC 210, LC 269 |
| 69 | Topological Sort Part 2 | Longest path in DAG, All paths source to target, Parallel courses, Minimum height trees | LC 797, LC 1136, LC 329, LC 310, LC 802 |
| 70 | Dijkstra's Algorithm | Single source shortest path, Priority queue impl, Path reconstruction, Network delay time | CSES Shortest Routes I, LC 743, LC 787, LC 1514, LC 1631 |
| 71 | Bellman-Ford + Floyd-Warshall | Negative weights, Negative cycle detection, All pairs shortest path, City with smallest neighbors | CSES High Score, CSES Cycle Finding, CSES Shortest Routes II, LC 787, LC 1334 |
| 72 | Union-Find (DSU) Part 1 | Union by rank/size, Path compression, Connected components, Cycle detection, Accounts merge | CSES Road Construction, LC 547, LC 684, LC 128, LC 721 |
| 73 | Union-Find Part 2 | DSU with extra info, Redundant connection II, Number of provinces, Earliest moment friends | LC 685, LC 547, LC 1101, LC 1258, LC 399 |
| 74 | Minimum Spanning Tree | Kruskal's with DSU, Prim's with PQ, Min cost to connect all points, Optimize water distribution | CSES Road Reparation, LC 1584, LC 1135, LC 1168, LC 1489 |
| 75 | Bipartite Graphs | Bipartite check (2-coloring), Odd cycle detection, Possible bipartition, Is graph bipartite | CSES Building Teams, LC 785, LC 886, LC 1042, LC 207 |
| 76 | Graph Patterns Day 1 | Word ladder, Clone graph, Evaluate division, Graph valid tree, Reconstruct itinerary | LC 127, LC 133, LC 399, LC 261, LC 332 |
| 77 | Graph Patterns Day 2 | Cheapest flights K stops, Path with max probability, Swim in rising water, Path with min effort | LC 787, LC 1514, LC 778, LC 1631, LC 882 |
| 78 | Grid Graph Mastery | Unique paths (graph view), Shortest path in grid, Rotting oranges, Treasure island, Making a large island | LC 1091, LC 994, LC 542, LC 827, LC 1020 |
| 79 | SCC + Bridges (Interview Level) | SCC concept, Kosaraju's algorithm, Critical connections in network (bridges), Articulation points | CSES Flight Routes Check, CSES Planets and Kingdoms, LC 1192, LC 207, LC 210 |
| 80 | Advanced Graph Problems | Multi-step algorithms, Graph + binary search, Graph + DP combos | CSES Flight Discount, LC 1334, LC 1368, LC 1976, LC 2045 |
| 81 | Graph Practice Marathon | Mixed difficulty graph problems — pattern recognition | LC 323, LC 1129, LC 1462, LC 1345, LC 743 |
| 82 | Graph Self-Test | **TIMED PRACTICE: 5 graph problems in 2.5 hrs** | 5 unsolved from LC Graph tag |

---

# PHASE 7: DYNAMIC PROGRAMMING (Days 83–100)

> **Goal:** DP is the interview boss fight. 18 days of pure DP domination — every pattern, every variant.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 83 | DP Introduction | Overlapping subproblems, Optimal substructure, Memoization vs Tabulation, State/Transition | CSES Dice Combinations, LC 70, LC 509, LC 746, LC 1137 |
| 84 | 1D DP Part 1 | House robber I/II, Kadane's max subarray, Coin change (min coins), Coin change (ways), Decode ways | CSES Minimizing Coins, CSES Coin Combinations I, CSES Coin Combinations II, LC 198, LC 213 |
| 85 | 1D DP Part 2 | LIS O(n²) and O(n log n), Number of LIS, Longest bitonic, Russian doll envelopes, Max length of pair chain | CSES Increasing Subsequence, LC 300, LC 673, LC 354, LC 646 |
| 86 | 1D DP Part 3 | Word break I/II, Perfect squares, Integer break, Ugly numbers, Jump game DP | LC 139, LC 140, LC 279, LC 343, LC 264 |
| 87 | 2D DP: Grids | Unique paths I/II, Min path sum, Cherry pickup, Dungeon game, Triangle | CSES Grid Paths, LC 62, LC 63, LC 64, LC 120 |
| 88 | 2D DP: Strings Part 1 | LCS, Longest common substring, Edit distance, Min insertions to make palindrome, Longest palindromic subseq | CSES Edit Distance, LC 1143, LC 72, LC 1312, LC 516 |
| 89 | 2D DP: Strings Part 2 | Wildcard matching, Regex matching, Interleaving strings, Distinct subsequences, Shortest common superseq | LC 10, LC 44, LC 97, LC 115, LC 1092 |
| 90 | Knapsack Variants | 0/1 knapsack, Unbounded knapsack, Subset sum, Partition equal subset, Target sum, Ones and zeros | CSES Book Shop, CSES Money Sums, LC 416, LC 494, LC 474 |
| 91 | Knapsack Part 2 | Min subset sum difference, Count subsets with given diff, Last stone weight II, Profitable schemes | CSES Two Sets II, LC 1049, LC 879, LC 518, LC 377 |
| 92 | DP on Subsequences | Longest palindromic subseq, Print LCS, Count palindromic substrings, Minimum deletions to make palindrome | LC 516, LC 1143, LC 647, LC 5, LC 730 |
| 93 | Buy & Sell Stock Series | Best time I/II/III/IV, With cooldown, With transaction fee — state machine DP | LC 121, LC 122, LC 123, LC 188, LC 309 |
| 94 | Interval DP | Matrix chain multiplication, Burst balloons, Strange printer, Min cost tree from leaf values | LC 312, LC 1039, LC 664, LC 1130, LC 1547 |
| 95 | Bitmask DP | State compression, TSP, Assignment problem, Partition to K equal sum subsets, Shortest superstring | CSES Hamiltonian Flights, LC 847, LC 943, LC 698, LC 691 |
| 96 | Digit DP | Count numbers with property in [L,R], Numbers at most N given digit set, Non-negative ints without consecutive ones | CSES Counting Numbers, LC 357, LC 233, LC 902, LC 600 |
| 97 | DP Patterns Consolidation | State machine DP, DP with data structures, DP on trees revisited, Multi-dimensional DP | LC 309, LC 714, LC 337, LC 968, LC 1335 |
| 98 | DP Practice Marathon 1 | Mixed difficulty DP — pattern recognition | LC 91, LC 1048, LC 152, LC 1326, LC 1547 |
| 99 | DP Practice Marathon 2 | Hard DP problems — build confidence | LC 472, LC 85, LC 312, LC 546, LC 1235 |
| 100 | DP Self-Test | **TIMED PRACTICE: 5 DP problems in 2.5 hrs** | 5 unsolved from LC DP tag |

---

# PHASE 8: INTERVIEW POWER PATTERNS (Days 101–105)

> **Goal:** Patterns that come up repeatedly in OAs and interviews but don't fit neatly in one category.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 101 | Matrix Patterns | Spiral traversal, Diagonal traversal, Rotate image, Set matrix zeroes, Game of life | LC 54, LC 498, LC 48, LC 73, LC 289 |
| 102 | String Patterns | String to integer, Longest palindromic substring, Repeated DNA, Encode/decode strings, Compare version numbers | LC 8, LC 5, LC 187, LC 271, LC 165 |
| 103 | Advanced Hashing | Substring with concatenation, Min window substring (revisit), Longest duplicate substring, Rolling hash concept | LC 30, LC 76, LC 1044, LC 49, LC 438 |
| 104 | Simulation + Implementation | Spiral matrix II, Zigzag conversion, Robot bounded, Text justification, Multiply strings | LC 59, LC 6, LC 1041, LC 68, LC 43 |
| 105 | Mixed OA Simulation | **TIMED: 4 problems in 90 minutes** (OA format) | 4 curated problems from LC Premium/Contest |

---

# PHASE 9: CP BRIDGE — ADVANCED TOPICS (Days 106–120)

> **Goal:** The last 15 days transition you into CP territory. These topics also appear in hard interviews at top companies. After Day 120, you're ready to pursue competitive programming full-time.

| Day | Topic | Sub-topics (MUST Complete) | Problems |
|-----|-------|---------------------------|----------|
| 106 | Segment Trees Part 1 | Build O(n), Point update O(log n), Range query O(log n), Sum/Min/Max queries | CSES Dynamic Range Sum Queries, CSES Dynamic Range Minimum Queries, LC 307, LC 315, LC 493 |
| 107 | Segment Trees Part 2 | Lazy propagation, Range update + Range query, Range add/set operations | CSES Range Update Queries, CSES Range Updates and Sums, CSES Hotel Queries, LC 699, LC 218 |
| 108 | Segment Trees Part 3 | Custom merge functions, Range GCD/XOR, Merge sort tree concept, Persistent ST concept | CSES Distinct Values Queries, CSES Range Queries and Copies, CSES Salary Queries, LC 2286, LC 327 |
| 109 | Fenwick Tree (BIT) | Point update + prefix query, Range update + point query, 2D BIT concept, Inversion count | CSES Dynamic Range Sum Queries, CSES List Removals, LC 307, LC 315, LC 493 |
| 110 | String Algorithms Part 1 | String hashing, Rabin-Karp, Z-function, KMP algorithm, Rolling hash | CSES String Matching, CSES Finding Borders, CSES Finding Periods, LC 28, LC 459 |
| 111 | String Algorithms Part 2 | Suffix array concept, Longest common prefix, Manacher's algorithm for palindromes | CSES Longest Palindrome, LC 5, LC 214, LC 647, LC 1392 |
| 112 | Sqrt Decomposition + Mo's | Sqrt decomposition for range queries, Mo's algorithm, Block decomposition, Range mode query | CSES Range Xor Queries, CSES Static Range Sum Queries, LC 307, LC 1649, LC 2250 |
| 113 | Network Flow (Concept) | Max flow intuition, Ford-Fulkerson concept, Max flow = Min cut theorem, Bipartite matching concept | CSES Download Speed, CSES Police Chase, CSES School Dance, LC 1059, LC 785 |
| 114 | Strongly Connected Components | SCC definition, Kosaraju's algorithm, Tarjan's algorithm, Condensation graph, 2-SAT concept | CSES Flight Routes Check, CSES Planets and Kingdoms, LC 1192, LC 802, LC 207 |
| 115 | Bridges + Articulation Points | Bridge finding (Tarjan's), Articulation point detection, Bridge tree concept | LC 1192, CSES Flight Routes, LC 1568, LC 928, LC 685 |
| 116 | DP Optimization | Convex Hull Trick concept, Divide and Conquer optimization concept, Knuth optimization concept | CSES Minimizing Coins (revisit with optimization), LC 1235, LC 1547, LC 1000, LC 312 |
| 117 | Advanced Combinatorics + Game Theory | Sprague-Grundy theorem, Nim game variants, Burnside's lemma intro, Advanced counting | CSES Nim Game I, CSES Nim Game II, CSES Stair Game, LC 292, LC 464 |
| 118 | Full Contest Simulation 1 | **FULL CONTEST: 6 problems, 2.5 hrs** — mixed topics | 6 curated LC Hard/CSES problems |
| 119 | Full Contest Simulation 2 | **FULL CONTEST: 6 problems, 2.5 hrs** — emphasis on speed | 6 curated LC Hard/CSES problems |
| 120 | GRAND FINALE | Final revision, Template code review, Common mistakes checklist, **FULL CONTEST: 5 problems, 2 hrs** | 5 curated contest-style problems |

---

# TOPIC-WISE PROBLEM COUNT SUMMARY

| Phase | Days | Topics | Problems |
|-------|------|--------|----------|
| 0: C++ & STL | 1–7 | Language mastery | 35 |
| 1: Mathematics | 8–18 | Number theory, combinatorics, bits | 55 |
| 2: Arrays & Techniques | 19–32 | Prefix, hashing, two pointers, BS, greedy | 70 |
| 3: Recursion & Backtracking | 33–40 | Recursion, backtracking, pruning | 40 |
| 4: Linear DS | 41–50 | Linked lists, stacks, queues, heaps, design | 50 |
| 5: Trees | 51–63 | BT, BST, Trie, Tree DP, LCA | 65 |
| 6: Graphs | 64–82 | BFS, DFS, Dijkstra, DSU, MST, SCC | 95 |
| 7: Dynamic Programming | 83–100 | 1D, 2D, knapsack, bitmask, digit, interval | 90 |
| 8: Interview Patterns | 101–105 | Matrix, string, hashing, simulation | 25 |
| 9: CP Bridge | 106–120 | SegTree, strings, sqrt, flow, DP optimization | 75 |
| **TOTAL** | **120 days** | | **~600 structured + 400 daily practice = 1000** |

---

# DAILY ROUTINE TEMPLATE

```
┌─────────────────────────────────────────────┐
│           DAILY DSA ROUTINE                 │
├─────────────────────────────────────────────┤
│ 1. Theory (30-45 min)                       │
│    - Read/watch concept                     │
│    - Understand time & space complexity      │
│    - Code the template from scratch          │
│                                             │
│ 2. Curriculum Problems (2-3 hrs)            │
│    - 5 problems from today's topic           │
│    - Attempt each for 20-30 min solo         │
│    - If stuck > 30 min, read hint only       │
│    - If stuck > 45 min, study editorial      │
│    - ALWAYS code the solution yourself       │
│                                             │
│ 3. Daily Practice (1-1.5 hrs)               │
│    - 5 problems from PREVIOUS topics         │
│    - Spaced repetition style                 │
│    - Mix easy + medium from past phases      │
│                                             │
│ 4. Review (15 min)                          │
│    - Log what you learned                    │
│    - Note patterns you recognized            │
│    - Add tricky problems to revision list    │
└─────────────────────────────────────────────┘
```

---

# PATTERN RECOGNITION CHEAT SHEET

```
"If you see _____, think _____"

Array is sorted               → Binary Search / Two Pointers
Find all combinations/subsets → Backtracking
Top/Bottom/Kth element        → Heap
Shortest path unweighted      → BFS
Shortest path weighted        → Dijkstra / Bellman-Ford
Connected components          → DFS / Union-Find
Optimization over intervals   → DP
String matching/prefix        → Trie / KMP / Z-function
Sliding window clue words     → "subarray", "substring", "consecutive"
Monotonic stack clue          → "next greater", "previous smaller"
Need O(1) lookup              → HashMap / HashSet
Tree + recursion              → DFS (pre/in/post order)
Graph + layers/levels         → BFS
Count ways                    → DP
Min/max with constraints      → DP or Binary Search on Answer
Interval scheduling           → Greedy (sort by end time)
Range queries (static)        → Prefix sum
Range queries (dynamic)       → Segment Tree / BIT
Frequency / grouping          → HashMap
Palindrome                    → Two pointers / DP / Manacher's
Cycle detection               → Floyd's / DFS coloring
LCA in tree                   → Binary Lifting
```

---

> **"600 structured problems in 120 days. 400 more from daily practice. 1000 total. You will be UNSTOPPABLE."**
>
> After Day 120, you have a rock-solid DSA foundation AND the advanced toolkit to jump straight into competitive programming. Let's dominate. 🔥
