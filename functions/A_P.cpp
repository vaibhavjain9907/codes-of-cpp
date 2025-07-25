#include <iostream>
using namespace std;
int artpr(int n)
{
    int A_P = (3 * n + 7);
    return A_P;
}
int main()
{
    int n;
    cin >> n;
    cout << artpr(n);
    return 0;
}