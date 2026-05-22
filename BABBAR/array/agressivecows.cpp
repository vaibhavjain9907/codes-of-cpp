#include <bits/stdc++.h>
using namespace std;

int canPlaceCows(vector<int> &stalls, int n, int cows, int minDist)
{
    int count = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - lastPos >= minDist)
        {
            count++;
            lastPos = stalls[i];
        }
    }

    return count >= cows;
}

int aggressiveCows(vector<int> &stalls, int n, int cows)
{
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[n - 1] - stalls[0];
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, n, cows, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 8, 4, 9};
    int n = stalls.size();
    int cows = 3;

    cout << aggressiveCows(stalls, n, cows) << endl;

    return 0;
}
