#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int><int> m;
    int sum = 0;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (auto i : arr.size())
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (sum == 8)
            {
                cout << m;
            }
        }
    }
    return 0;
}