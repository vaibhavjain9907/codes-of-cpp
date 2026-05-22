#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cin >> row >> col;
    int el;
    int arr[row][col] = {};
    int outpu[row][col] = {};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> el;
            arr[i][j] = el;
        }
    }
    int sum;
    int j = 0;
    int i = 0;
    while (row < col)
    {
        sum = arr[i] + arr[j];
        i++;
        j++;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                outpu[i][j] = sum;
            }
        }
        i++;
    }

    return 0;
}