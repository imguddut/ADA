#include <iostream>
using namespace std;

int Max_In_Column(int array[][5], int rows, int col)
{
    int maxIndex = 0;
    for (int i = 1; i < rows; i++)
    {
        if (array[i][col] > array[maxIndex][col])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int Two_dimensional_peak(int array[][5], int lowCol, int highCol)
{
    int mid_col = (lowCol + highCol) / 2;
    int maxIndex = Max_In_Column(array, 5, mid_col);
    bool leftValid = (mid_col - 1 >= 0);
    bool rightValid = (mid_col + 1 < highCol);

    if ((!leftValid || array[maxIndex][mid_col] > array[maxIndex][mid_col - 1]) &&
        (!rightValid || array[maxIndex][mid_col] > array[maxIndex][mid_col + 1]))
    {
        return array[maxIndex][mid_col];
    }

    if (leftValid && array[maxIndex][mid_col] < array[maxIndex][mid_col - 1])
    {
        return Two_dimensional_peak(array, lowCol, mid_col - 1);
    }

    return Two_dimensional_peak(array, mid_col + 1, highCol);
}

int main()
{
    int array[][5] = {{14, 12, 56, 10, 19},
                      {15, 48, 41, 15, 81},
                      {16, 37, 13, 20, 21},
                      {17, 47, 12, 22, 61},
                      {54, 74, 84, 41, 51}};
    int current_Peak = Two_dimensional_peak(array, 0, 5);
    cout << "The current peak is " << current_Peak << endl;
}
