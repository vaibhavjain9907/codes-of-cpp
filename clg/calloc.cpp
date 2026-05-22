#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    // Handle 0 separately
    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    while (n >= 10)
    { // Repeat until single digit
        long long sum = 0;
        while (n > 0)
        {
            sum += n % 10; // Add last digit
            n /= 10;
        }
        n = sum; // Replace n with sum of digits
    }

    cout << n;
        return 0;
}