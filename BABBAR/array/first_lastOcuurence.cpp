#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            int ans = arr[mid];
            end = mid - 1;
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
                }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int even[11] = {1, 2, 4, 5, 5, 5, 5, 5, 5, 5, 6};
    cout << "inedx of 5 : " << firstocc(even, 11, 5) << endl;
    cout << "inedx of 5 : " << lastocc(even, 11, 5);
}