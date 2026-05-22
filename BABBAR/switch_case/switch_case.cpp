#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    char op;
    cout << "enter the symbol: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case 'l':
        cout << (log(a) / log(b)) << endl;
        break;
    case 'e':
        cout << (exp(a) / exp(b)) << endl;
        break;
    case 's':
        cout << a * a << endl;
        cout << b * b << endl;
        break;
    case 'r':
        cout << a % b << endl;
    }
}