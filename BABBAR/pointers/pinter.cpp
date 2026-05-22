#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *a = &i;
    (*a)++;
    cout << i << endl;

    cout << *a << endl;
    // copy one pointer to another
    int *q = a;
    cout << *q << "-" << *a << endl;

    cout << q << " - " << a << endl;

    // important concept
    int y = 3;
    int *z = &y;
    *z = *z + 1;
    cout << "z" << z << endl;
    z = z + 1;
    cout << " hello " << *z << endl;
    cout << z;
}