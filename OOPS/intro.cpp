#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    int nums[] = {};
    int output;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        nums.push_back(value);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = nums[i] + nums[j];
            if (sum > output)
            {
                output = sum;
            }
        }
    }
    return output;
}