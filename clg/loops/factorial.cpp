#include <iostream>
using namespace std;
int fact(int n, int m)
{
    long long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = (f * i) % m;
    }
    return int(f);
}
int main()
{
    int n, m;
    cout << "enter n";
    cin >> n >> m;
    cout << fact(n, m);
}