#include <iostream>
using namespace std;

void search(int key, int arr[], int size)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index: " << i << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Key not found" << endl;
    }
}

int main()
{
    int arr[10] = {1, 8, 7, 15, -8, 15, 3, 15, 9, 10};
    cout << "Enter the number you want to search: ";
    int key;
    cin >> key;

    search(key, arr, 10);
    return 0;
}