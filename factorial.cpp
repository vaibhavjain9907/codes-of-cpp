#include <iostream>
using namespace std;
int f = 1;
int fact(int n)
{
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    cout << fact(n);
}