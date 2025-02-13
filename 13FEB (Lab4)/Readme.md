# Triangle Point Inclusion Algorithm

## Algorithm
This program determines whether a given point lies inside a triangle using the **area method**.

### Steps:
1. **Compute the Area of the Triangle ABC**:
   - Using the formula:
     
     \[ A_{ABC} = \frac{|Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)|}{2} \]

2. **Compute the Areas of Sub-Triangles Formed with the Test Point**:
   - Calculate the areas of **PAB**, **PBC**, and **PCA** using the same formula.

3. **Check if the Point is Inside**:
   - If **A_PAB + A_PBC + A_PCA == A_ABC**, the point is inside the triangle.
   - Otherwise, it lies outside.

## Time Complexity
- **O(1)** since only a few arithmetic operations are required.

## Space Complexity
- **O(1)** as only a few additional variables are used.

## Example Input & Output
**Input Triangle:** `{(0,0), (5,0), (0,5)}`

**Test Point:** `{(2,2)}`

**Output:**
```
Point is inside the triangle
```


```

# Convex Hull Algorithm (Naive Approach)

## Algorithm
The **Convex Hull** of a set of points is the smallest convex polygon that encloses all given points. This implementation follows a **naive approach** by checking every pair of points and determining whether they form part of the convex hull.

### Steps:
1. **Check for Edge Validity**:
   - For each pair of points `(i, j)`, check if it forms a valid convex hull edge.
   - This is done by verifying that all other points lie on the same side of the line formed by `(i, j)`.

2. **Orientation Check**:
   - The function `orientation(p, q, r)` determines the orientation of three points:
     - **0** → Collinear points.
     - **>0** → Counter-clockwise turn.
     - **<0** → Clockwise turn.
   - If any point lies on the opposite side, the edge is invalid.

3. **Build the Convex Hull**:
   - If an edge is valid, add both endpoints to the hull.
   - Continue until all valid edges are found.

## Time Complexity
The naive convex hull algorithm has a time complexity of **O(n³)** due to three nested loops:
- **O(n²)** for iterating over all pairs of points.
- **O(n)** for checking all other points relative to each pair.

## Space Complexity
- The space complexity is **O(n)** for storing the convex hull points.


```
# Iterative QuickSort Algorithm

## Algorithm
QuickSort is a **divide-and-conquer** sorting algorithm. This implementation uses an **iterative approach** with a stack instead of recursion.

### Steps:
1. **Choose a Pivot**:
   - The last element in the array is selected as the pivot.

2. **Partitioning the Array (Lomuto Partition Scheme)**:
   - Move smaller elements to the left of the pivot and larger elements to the right.
   - Swap the pivot into its correct position.

3. **Iterative QuickSort Using Stack**:
   - Use a stack to store subarrays to be sorted.
   - Push left and right subarrays onto the stack for further sorting.
   - Process the stack elements iteratively until sorting is complete.

## Time Complexity
- **Best & Average Case (O(n log n))**: Efficient partitioning keeps dividing the array into balanced parts.
- **Worst Case (O(n²))**: Happens when the smallest/largest element is always chosen as the pivot.

## Space Complexity
- **O(log n)** in the best case due to stack usage.
- **O(n)** in the worst case when the recursion tree is highly unbalanced.

## Example Input & Output
**Input Array:** `{10, 80, 30, 90, 40, 50, 70}`

**Output:**
```
Sorted array: 10 30 40 50 70 80 90
```

# Matrix Multiplication 
**Algorithm:**

1. **Initialize the Resultant Matrix:**
   - Create an empty matrix `C` to store the result.
   
2. **Matrix Multiplication:**
   - Iterate through each row `i` of matrix `A`.
   - For each row `i`, iterate through each column `j` of matrix `B`.
   - Initialize `C[i][j]` to 0.
   - Perform the dot product of the `i`-th row of `A` and the `j`-th column of `B`:
     - Iterate through each element `k` from 0 to `n-1`.
     - Multiply `A[i][k]` with `B[k][j]` and add to `C[i][j]`.

3. **Output the Resultant Matrix:**
   - Print the matrix `C` after the multiplication process.

---

**Time Complexity:**
- O(n³) (For an `n x n` matrix, each element requires `n` multiplications and `n` additions)

**Space Complexity:**
- O(n²) (Requires extra space for the resultant matrix `C`)

# Max Min Using Divide and Conquer
**Algorithm:**

1. **Base Cases:**
   - If there is only one element, both min and max are that element.
   - If there are two elements, compare them and assign the smaller to min and the larger to max.

2. **Divide:**
   - Find the middle index of the array.
   - Recursively find the minimum and maximum in the left and right halves.

3. **Conquer:**
   - Compare the minimum values from both halves and take the smaller one.
   - Compare the maximum values from both halves and take the larger one.

---

**Time Complexity:**
- **Best, Average, and Worst Case:** O(n) (Each element is compared approximately 1.5 times per recursion step, making it more efficient than a naive approach which takes 2n comparisons.)

**Space Complexity:**
- O(log n) (Recursive calls stack depth for divide-and-conquer approach)

# Triangle Generation 
**Algorithm:**

1. **Check for Minimum Points:**
   - If there are fewer than 3 points, print an error message and return since a triangle requires at least 3 points.

2. **Generate Possible Triangles:**
   - Iterate through all unique triplets of points in the given set.
   - For each triplet (A, B, C), check if they are collinear using the determinant formula:
     
     \[ A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y) \]
     
   - If the determinant is zero, the points are collinear and do not form a valid triangle.
   - Otherwise, print the triplet as a valid triangle.

---

**Time Complexity:**
- O(n³) (Since we check all possible triplets in a set of `n` points)

**Space Complexity:**
- O(1) (Only a few extra variables are used; no additional memory is allocated apart from input storage)

