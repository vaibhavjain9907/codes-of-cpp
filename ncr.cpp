#include <iostream>
using namespace std;
long long int fact = 1;
int fact(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fact = *i;
    }
    return fact;
}
int nCr(int n, int r)
{

    int num = fact(n);
    int den = fact(n - r) * fact(r);
    int ans = num / den;
    return ans;
}
int main()
{
    int n, r;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;
    long long cnk = nCr(n, r);
    cout << "fact is :" << cnk;
}