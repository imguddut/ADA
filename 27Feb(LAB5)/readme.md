**Algorithm: Dijkstra's Shortest Path**

1. **Initialize:**
   - Create an array `dist[]` to store the shortest distance from the source to each vertex, initialized to `INT_MAX`.
   - Create a boolean array `sptSet[]` to track visited vertices, initialized to `false`.
   - Set the distance of the source vertex to `0`.

2. **Find the Minimum Distance Vertex:**
   - Pick the vertex `u` that has the minimum `dist[]` value and is not yet processed.
   - Mark `u` as processed in `sptSet[]`.

3. **Update Distance Values:**
   - For each adjacent vertex `v` of `u`, update `dist[v]` if:
     - `v` is not in `sptSet[]`
     - There is an edge `u → v`
     - The path through `u` gives a shorter distance to `v`

4. **Repeat Steps 2 and 3** until all vertices are processed.

5. **Output the Result:**
   - Print the shortest distance from the source to all other vertices.

---

**Time Complexity:**
- **O(V²)** for the adjacency matrix implementation (as used in this code)
- **O((V + E) log V)** if implemented using a priority queue (optimized with a min-heap)

**Space Complexity:**
- **O(V)** for storing `dist[]` and `sptSet[]`
- **O(V²)** for storing the adjacency matrix