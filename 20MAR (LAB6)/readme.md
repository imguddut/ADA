**Algorithm: Kruskal's Minimum Spanning Tree (MST)**

1. **Sort Edges:**
   - Insert all edges into a min-heap (priority queue) based on their weights.

2. **Initialize Disjoint Set Union (DSU):**
   - Create a DSU (Disjoint Set Union) to keep track of connected components.
   - Each node starts as its own parent.

3. **Process Edges:**
   - Extract the smallest edge from the priority queue.
   - Use DSU to check if adding the edge creates a cycle.
   - If not, add the edge to the MST and update the total cost.
   - Stop when the MST has `n - 1` edges (where `n` is the number of vertices).

4. **Output Results:**
   - If `n - 1` edges are used, print the MST edges and the total cost.
   - Otherwise, print that MST is not possible.

---

**Time Complexity:**
- **O(E log E)** for sorting edges (heap operations).
- **O(α(V))** for DSU operations using path compre

**Algorithm: Prim's Algorithm (Using Near Array Method) for Minimum Spanning Tree (MST)**

1. **Initialize:**
   - Create a `near` array to track the closest vertex to the MST.
   - Identify the minimum cost edge and add it to the MST.

2. **Set Up Near Array:**
   - Update the `near` array based on the selected edge.
   - Mark the included vertices in MST.

3. **Add Remaining Edges (n-2 iterations):**
   - Find the next minimum cost edge connecting a vertex from MST to a vertex outside MST.
   - Add the edge to MST and update the `near` array.
   - Mark the newly added vertex.

4. **Output MST and Minimum Cost:**
   - Print the edges of the MST and the total cost.

---

**Time Complexity:**
- **O(V²)** (Checking edges for minimum cost in each step).

**Space Complexity:**
- **O(V²)** (For storing the adjacency matrix).

