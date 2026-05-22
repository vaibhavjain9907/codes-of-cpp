#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n";
    cin >> n;
    int nums[n] = {};
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        nums[i] = value;
    }
    int count = 0;
    for (int j = 0; j > n; j++)
    {
        if (nums[j] == 0)
        {
            continue;
            count++;
        }
        cout << nums[j];
    }

    for (int k = 0; k < count; k++)
    {
        cout << "0";
    }
    return 0;
}