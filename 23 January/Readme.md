# Peak Element Finder in an Array

## Introduction
This C++ program finds a peak element in a given array using the **Binary Search** approach. A peak element is an element that is greater than or equal to its neighbors.

## Approach
- **Brute Force Approach (commented out)**: Uses a linear search method to check each element.
- **Optimized Approach (Binary Search)**: Efficiently finds a peak element using a divide-and-conquer strategy.

## Algorithm (Binary Search)
1. Find the middle index `mid`.
2. If `arr[mid]` is a peak (greater than or equal to neighbors), return `mid`.
3. If `arr[mid-1]` is greater, search in the left subarray.
4. Else, search in the right subarray.

## Code Explanation
- The function `peak(int arr[], int low, int high, int n)` implements the **recursive binary search** to find a peak.
- The `main()` function initializes an array, calls the `peak()` function, and prints the peak element.

## Example Input & Output
**Input Array:** `{1, 2, 3, 4, 5, 6, 7, 8, 5, 1}`  
**Output:** `Peak is 8`

## Complexity Analysis
- **Time Complexity:** `O(log n)` (Binary Search approach)
- **Space Complexity:** `O(log n)` (Recursive stack space)


# 2D Peak Element Finder in an Array

## Introduction
This C++ program finds a peak element in a **2D array** using a **Binary Search on Columns** approach. A peak element is defined as an element that is **greater than or equal to its adjacent elements in the same column and neighboring columns**.

## Approach
- **Find Maximum in a Column:** Identify the maximum element in the middle column.
- **Check Peak Condition:** If it is greater than its left and right neighbors (if they exist), return it.
- **Move Left or Right:** If the left neighbor is greater, search in the left half; otherwise, search in the right half.

## Algorithm (Binary Search on Columns)
1. Find the middle column `mid_col`.
2. Identify the **maximum element** in `mid_col` using `Max_In_Column()`.
3. If the element is greater than its left and right neighbors (if valid), return it as the peak.
4. If the left neighbor is greater, search in the **left half**.
5. If the right neighbor is greater, search in the **right half**.

## Code Explanation
- `Max_In_Column(int array[][5], int rows, int col)`: Finds the maximum element in a column.
- `Two_dimensional_peak(int array[][5], int lowCol, int highCol)`: Recursively searches for a peak element in the 2D array.
- `main()`: Initializes a 5×5 matrix and calls `Two_dimensional_peak()` to find the peak element.

## Example Input & Output
**Input Matrix:**
![image](https://github.com/user-attachments/assets/c7cb35a1-42cf-4503-8467-18c09f035b16)
![image](https://github.com/user-attachments/assets/6d1f6176-63ec-4112-8e9b-04b95cdba045)

## Complexity Analysis
- **Time Complexity:** `O(rows * log(cols))` (Binary Search on Columns)
- **Space Complexity:** `O(log(cols))` (Recursive stack space)

## How to Run
1. Copy and paste the code into a C++ compiler.
2. Compile using `g++ filename.cpp -o output`.
3. Run the executable `./output`.

## Author
- **Naval Kishor Kumar**



