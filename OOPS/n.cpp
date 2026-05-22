#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " eter n";
    cin >> n;
    int nums[n] = {};
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << "enter val";
        cin >> value;
        nums[i] = value;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 3 == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}