#include <iostream>
#include <vector>

using namespace std;
bool isPossible(vector<int> &boards, int k, int mid)
{
    int painters = 1;
    int blocks = 0;

    for (int i = 0; i < boards.size(); i++)
    {
        if (blocks + boards[i] <= mid)
        {
            blocks += boards[i];
        }
        else
        {
            painters++;
            if (painters > k || boards[i] > mid)
            {
                return false;
            }
            blocks = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        sum = boards[i] + sum;
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(boards, k, mid))
        {
            e = mid - 1;
            ans = mid;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;
    cout << findLargestMinDistance(boards, painters) << endl;
    return 0;
}
