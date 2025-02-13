#include <iostream>
using namespace std;

// Function to find min and max using Divide and Conquer
void findMinMax(int arr[], int low, int high, int &minVal, int &maxVal) {
    // Base Case: Only one element
    if (low == high) {
        minVal = maxVal = arr[low];
        return;
    }

    // Base Case: Two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            minVal = arr[low];
            maxVal = arr[high];
        } else {
            minVal = arr[high];
            maxVal = arr[low];
        }
        return;
    }

    // Divide the array into two halves
    int mid = (low + high) / 2;
    int leftMin, leftMax, rightMin, rightMax;

    // Recursively find min and max in both halves
    findMinMax(arr, low, mid, leftMin, leftMax);
    findMinMax(arr, mid + 1, high, rightMin, rightMax);

    // Conquer: Find overall min and max
    minVal = min(leftMin, rightMin);
    maxVal = max(leftMax, rightMax);
}

int main() {
    int arr[] = {12, 34, 7, 89, 5, 21, 50, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal, maxVal;
    findMinMax(arr, 0, n - 1, minVal, maxVal);

    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}