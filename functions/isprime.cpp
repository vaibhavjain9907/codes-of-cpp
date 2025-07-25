#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (IsPrime(n))
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }

    return 0;
}
