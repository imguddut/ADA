#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int profit, weight;

    Item(int p, int w) {
        profit = p;
        weight = w;
    }
};

// Function to compute maximum profit using fractional knapsack
double fractionalKnapsack(vector<Item> items, int capacity, string sortBy) {
    if (sortBy == "profit") {
        sort(items.begin(), items.end(), [](Item a, Item b) {
            return a.profit > b.profit;
        });
    } 
    else if (sortBy == "weight") {
        sort(items.begin(), items.end(), [](Item a, Item b) {
            return a.weight < b.weight;
        });
    } 
    else if (sortBy == "profit/weight") {
        sort(items.begin(), items.end(), [](Item a, Item b) {
            return (double)a.profit / a.weight > (double)b.profit / b.weight;
        });
    }

    double totalProfit = 0.0;
    for (auto item : items) {
        if (capacity >= item.weight) {
            totalProfit += item.profit;
            capacity -= item.weight;
        } else {
            totalProfit += item.profit * ((double)capacity / item.weight);
            break;
        }
    }

    return totalProfit;
}

int main() {
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}}; 
    int capacity = 50;

    cout << "Max Profit (Sorted by Profit): " << fractionalKnapsack(items, capacity, "profit") << endl;
    cout << "Max Profit (Sorted by Weight): " << fractionalKnapsack(items, capacity, "weight") << endl;
    cout << "Max Profit (Sorted by Profit/Weight): " << fractionalKnapsack(items, capacity, "profit/weight") << endl;

    return 0;
}
