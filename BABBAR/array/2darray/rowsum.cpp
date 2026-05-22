#include <iostream>
using namespace std;
void printsumrow(int arr[][3], int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void printsumcol(int arr[][3], int i, int j)
{
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3][3];
    cout << "enter the elements : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << " printing the array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "sum of els row wise : ";
    printsumrow(arr, 3, 3);
    cout << "sum of els col wise : ";
    printsumcol(arr, 3, 3);
    return 0;
}