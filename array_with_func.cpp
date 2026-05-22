#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    cout << endl;
    cout << "Printing Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int second[3] = {1, 5, 7};
    int third[3] = {7, 9, 11};
    int fourth[3] = {7, 4, 99};
    printArray(second, 3);
    printArray(third, 3);
    printArray(fourth, 3);
    int size = sizeof(fourth) / sizeof(int);
    cout << "size=" << size;
    return 0;
}
