#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "GCD is: " << gcd(a, b);
    return 0;
}
