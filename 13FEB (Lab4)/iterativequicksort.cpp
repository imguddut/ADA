#include <iostream>
#include <stack>
using namespace std;

// Partition function (Lomuto Partition)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Last element as pivot
    int i = low - 1;        // Index for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {  // Corrected condition to include equal values
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    return i + 1;
}

// Iterative QuickSort using stack
void quickSortIterative(int arr[], int low, int high) {
    stack<pair<int, int>> stk;
    stk.push({low, high});

    while (!stk.empty()) {
        int l = stk.top().first;
        int h = stk.top().second;
        stk.pop();

        if (l < h) {
            int p = partition(arr, l, h);

            // Push left and right subarrays to stack
            if (p - 1 > l)
                stk.push({l, p - 1});
            if (p + 1 < h)
                stk.push({p + 1, h});
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSortIterative(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}