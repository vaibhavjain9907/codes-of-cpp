#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    int even[5] = {3, 8, 10, 17, 1};
    cout << "pivot : " << pivot(even, 5);
}