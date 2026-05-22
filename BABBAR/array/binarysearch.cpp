#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {2, 4, 6, 8, 10};
    int evens = BinarySearch(even, 6, 12);
    int odds = BinarySearch(odd, 5, 10);
    cout << "Index of 10 : " << evens;
    cout << endl;
    cout << "index of 10 : " << odds;
}