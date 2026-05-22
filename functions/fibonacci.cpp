#include <iostream>
using namespace std;
int fibonacci(int num)
{
    int a = 0;
    int b = 1;
    cout << a << endl
         << b << endl;

    int n;
    for (int i = 0; i < num - 2;  i++)
    {
        int NextNumber = a + b;
        cout << NextNumber << endl;

        a = b;
        b = NextNumber;
    }
    return b;
}
int main()
{
    int n;
    cin >> n;
    int series = fibonacci(n);
    cout << series;
    return 0;
}