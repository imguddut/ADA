# Fractional Knapsack Algorithm

## Algorithm
The **Fractional Knapsack** problem is solved using a **Greedy Algorithm** approach. The main idea is to take items with the highest value-to-weight ratio first, ensuring maximum profit in a given weight capacity. The algorithm follows these steps:

1. **Sort Items**:
   - Based on the selected sorting strategy:
     - **Profit**: Sort items in descending order of profit.
     - **Weight**: Sort items in ascending order of weight.
     - **Profit-to-Weight Ratio**: Sort items in descending order of `profit/weight`.

2. **Pick Items Greedily**:
   - Initialize `totalProfit = 0`.
   - Iterate through sorted items:
     - If the remaining capacity allows, take the entire item.
     - Otherwise, take a fraction of the item to fill the remaining capacity.

3. **Compute Maximum Profit**:
   - Add the corresponding profit for fully or partially taken items.

## Time Complexity
The time complexity of the **Fractional Knapsack Algorithm** is **O(n log n)** due to sorting, followed by an **O(n)** iteration for selecting items, making the overall complexity:

**O(n log n) + O(n) = O(n log n)**

## Space Complexity
- The algorithm runs in **O(1)** extra space (excluding input storage), as it only uses a few additional variables.