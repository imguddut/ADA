#include <iostream>
#include <math.h>
using namespace std;
//find a peak element in an array
//1. brute force approach using linear search
// int peak(int*arr,int n){
// for(int i=0;i<n;i++)
// {
//     if((i==0||arr[i-1]<arr[i])&&(i==n-1||arr[i]>arr[i+1]))
//     return i;
// }
// return -1;
// }
int peak(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid] && (mid == n - 1 || arr[mid] >= arr[mid + 1])))
    {
        return mid;
    }
    else if (arr[mid - 1] > arr[mid])
    {
        return peak(arr, low, mid - 1, n);
    }
    else
        return peak(arr, mid + 1, high, n);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int size = 10;
    int peak_index = peak(arr, 0, 9, size);
    cout << "Peak is " << arr[peak_index];
    return 0;
}
