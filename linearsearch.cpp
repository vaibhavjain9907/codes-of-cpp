#include <iostream>
using namespace std;
bool search(int key, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 8, 7, 15, -8};

    cout << "enter the word youu  want to search : ";
    int key;
    cin >> key;
    bool found = search(key, arr, 10);
    if (found)
    {
        cout << "key is present ";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}