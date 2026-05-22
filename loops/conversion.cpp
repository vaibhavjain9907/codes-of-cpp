#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*Binary to decimal
     int n;
     cin >> n;
     int bit = 0;
     int i = 0;
     int ans = 0;
     while (n != 0)
     {
         bit = n & 1;
         ans = bit *  pow(10, i) + ans;
         n = n >> 1;
         i++;
     }
     cout << ans;*/
    /*Decimal to binary*/
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans;
}