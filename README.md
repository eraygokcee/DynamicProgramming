# Longest Common Subsequence (LCS) Finder

This project solves the **Longest Common Subsequence (LCS)** problem using **Dynamic Programming**. The LCS problem is widely used in fields such as genetic sequence analysis, spell checking, and bioinformatics. Given two input strings, this program calculates the length and characters of the longest subsequence that appears in both strings.

## Overview

This project was developed as part of an assignment for the **Algorithm Analysis** course at Yıldız Technical University.

### Video Demo
You can view the demo of the project through this [video link](https://youtu.be/PHR3-vjiNPA).

### Algorithm

The **dynamic programming** approach divides the problem into smaller subproblems, storing the results of these subproblems to avoid redundant calculations. This method is especially useful for problems that have overlapping subproblems and optimal substructure properties, like the LCS problem.

The key steps are:
1. **Divide and Conquer**: Break the problem into smaller subproblems.
2. **Solve Subproblems**: Use recursion to solve each subproblem.
3. **Memoization**: Store the results of subproblems to avoid recalculating them.
4. **Optimal Substructure**: Ensure each subproblem leads to an optimal solution.

The algorithm works by constructing a matrix to compare the characters of both strings. The matrix is updated at each step, tracking the length of the common subsequence as it is computed.

### Use Cases of Dynamic Programming
- Fibonacci sequence calculation
- Longest common subsequence (LCS) problems
- Knapsack problems
- Shortest path algorithms (e.g., Dijkstra’s algorithm)
- Edit distance problems (e.g., Levenshtein distance)
- Stock buy-sell problems
- Maximum subarray sum problems

### Input and Output

- **Input**: The program takes two strings as input from the user.
- **Output**: It calculates the length of the longest common subsequence and prints the sequence of characters that form this subsequence. Additionally, the internal steps and the matrix used during the computation are displayed to help users understand the process.

### Conclusion

The program successfully calculates the LCS using dynamic programming. The detailed matrix and intermediate steps displayed on the screen provide a clear understanding of how the LCS is derived.

## Technologies Used
- **Language**: C
- **Algorithm**: Dynamic Programming

