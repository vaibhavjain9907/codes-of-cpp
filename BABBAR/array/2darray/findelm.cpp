#include <iostream>
using namespace std;
bool ispresent(int arr[][4], int key, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    int key;
    cout << "enter key";
    cin >> key;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    if (ispresent(arr, key, 3, 4))
    {
        cout << "found" ;
    }
    else
    {
        cout << "not found";
    }
}