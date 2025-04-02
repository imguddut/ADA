# Analysis and Design Algorithm in C++

This repository contains various implementations of **algorithms and data structures** in C++. It includes sorting algorithms, mathematical computations, graph algorithms, and optimization techniques.

---

## 📌 Sorting Algorithms
Sorting algorithms are used to arrange elements in a specific order (ascending/descending). Different sorting techniques vary in efficiency, stability, and space complexity.

| Algorithm          | Best Case   | Average Case | Worst Case  | Space Complexity | Stable? |
|-------------------|------------|-------------|------------|----------------|---------|
| **Selection Sort** | O(n²)      | O(n²)       | O(n²)      | O(1)           | No      |
| **Bubble Sort**    | O(n)       | O(n²)       | O(n²)      | O(1)           | Yes     |
| **Insertion Sort** | O(n)       | O(n²)       | O(n²)      | O(1)           | Yes     |
| **Merge Sort**     | O(n log n) | O(n log n)  | O(n log n) | O(n)           | Yes     |
| **Quick Sort**     | O(n log n) | O(n log n)  | O(n²)      | O(log n)       | No      |
| **Iterative Quick Sort** | O(n log n) | O(n log n) | O(n²) | O(log n)  | No      |

### 🔹 Sorting Implementations:
- **Selection Sort:** Finds the minimum element and places it at the beginning.
- **Bubble Sort:** Repeatedly swaps adjacent elements if they are in the wrong order.
- **Insertion Sort:** Inserts each element at its correct position in the sorted part.
- **Merge Sort:** Uses the divide-and-conquer approach to split and merge.
- **Quick Sort:** Selects a pivot, partitions the array, and sorts recursively.
- **Iterative Quick Sort:** Uses a stack instead of recursion.
 ![image](https://github.com/user-attachments/assets/0e7df7be-c4e5-478c-981f-a69b9e6a174b)
![image](https://github.com/user-attachments/assets/79625927-6fa9-44f4-b511-4d7a26410e7d)
![image](https://github.com/user-attachments/assets/f5ee1ea6-a964-4fbb-8803-c63c5782442c)
![image](https://github.com/user-attachments/assets/7e2d0d80-0c75-4753-9a5e-e85d3a6f358a)
![image](https://github.com/user-attachments/assets/3403c7f6-3010-4224-a576-d52047cb7126)

 

 
 
## 📌 Mathematical & Miscellaneous Algorithms
These algorithms solve various computational problems.

- **Find Peak Element in 1D & 2D Arrays**  
  - Finds an element greater than or equal to its neighbors.
  - Uses a binary search-like approach for efficiency.
  - Useful in optimization problems.
  
- **Magic Square (`magicsquare.cpp`)**  
  - A square matrix where row, column, and diagonal sums are equal.
  - Used in cryptography and mathematical puzzles.

- **Cosine Similarity (`palagrism.cpp`)**  
  - Measures similarity between two text files.
  - Treats words as vectors and calculates similarity using cosine angle.
  - Used in NLP and recommendation systems.

- **Jaccard Similarity (`jaccard.cpp`)**  
  - Measures similarity between two sets.
  - Used in machine learning and clustering.

---

## 📌 Divide and Conquer Algorithms
These algorithms break a problem into smaller subproblems, solve them recursively, and combine the results.

- **Binary Search (`binarysearch.cpp`)**  
  - Searches for an element in O(log n) time.
  - More efficient than linear search.

- **Max-Min Problem (`maxmin.cpp`)**  
  - Finds the maximum and minimum in an array.
  - More efficient than brute force methods.

- **Strassen’s Matrix Multiplication**  
  - A faster algorithm for matrix multiplication.
  - Reduces complexity from O(n³) to O(n^2.81).

---

## 📌 Greedy Algorithms
These algorithms make locally optimal choices at each step.

- **Activity Selection (`activitysel.cpp`)**  
  - Selects the maximum number of non-overlapping activities.
  - Used in scheduling problems.

- **Knapsack Problem (`knapsack.cpp`)**  
  - Optimizes item selection to maximize value within a weight limit.
  - Uses sorting strategies and allows fractional selection.

- **Dijkstra’s Algorithm (`dijkstra.cpp`)**  
  - Finds the shortest path from a source node to all others.
  - Used in network routing and GPS systems.

- **Prim’s Algorithm**  
  - Finds the minimum spanning tree of a graph.
  - Used in network design.

- **Kruskal’s Algorithm (`kruskals.cpp`)**  
  - Finds the minimum spanning tree using sorting and union-find.
  - Works well with edge list representation.

---

## 📌 Dynamic Programming (DP)
Dynamic programming optimizes problems by breaking them into overlapping subproblems.

- **Multi-Stage Graph Problem (`MGP.cpp`)**  
  - Finds the shortest path in a multi-stage graph.
  - Time Complexity: O(V+E).

- **All Pairs Shortest Path (Floyd-Warshall) (`allPairdp.cpp`)**  
  - Computes shortest paths between all node pairs.
  - O(n³) complexity, useful for dense graphs.

---

## 🚀 How to Run
1. Compile the C++ files using g++:
   ```sh
   g++ filename.cpp -o output
