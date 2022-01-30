#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(long *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    srand(time(0)); // Seed for random numbers

    int n = 1000;
    while (n <= 25000)
    {
        double totalTime = 0.0;

        for (int i = 1; i <= 10; i++)
        {
            long int arr[n];

            // Generate random array of size n
            for (int j = 0; j < n; j++)
            {
                arr[j] = rand() % n + 1;
            }

            auto start = chrono::high_resolution_clock::now();
            bubblesort(arr, n);
            auto end = chrono::high_resolution_clock::now();

            chrono::duration<double> duration = end - start;
            totalTime += duration.count();
        }

        double avgTime = totalTime / 10;
        cout << "Size: " << n << ", Time: " << avgTime << " seconds" << endl;

        n += 1000; // Increment n properly
    }
    return 0;
}