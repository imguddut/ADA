#include <iostream>
using namespace std;

// Function to multiply two matrices using conventional method
void multiplyConventional(int A[][2], int B[][2], int C[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print matrix
void printMatrix(int C[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    multiplyConventional(A, B, C, 2);

    cout << "Resultant Matrix:\n";
    printMatrix(C, 2);

    return 0;
}