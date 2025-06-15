#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int numr = fact(n);
    int denom = fact(r) * fact(n - r);
    int ans = numr / denom;
    return ans;
}
int main()
{
    int n;
    cout << "enter the no. you want the fact of : ";
    cin >> n;
    int r;
    cin >> r;
    cout << "ans is : " << nCr(n, r) << endl;
}