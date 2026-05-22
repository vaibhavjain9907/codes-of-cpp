#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    char ch = 'c';
    double d = 10.00;
    float f = 15.00;
    int *ptr = &num;
    char *ptr1 = &ch;
    double *ptr2 = &d;
    float *ptr3 = &f;

    cout << " num " << *ptr << endl;
    cout << "add of num" << ptr << endl;
    cout << " ch " << *ptr1 << endl;
    cout << "add of ch" << ptr1 << endl;
    cout << " d " << *ptr2 << endl;
    cout << "add of d" << ptr2 << endl;
    cout << " f " << *ptr3 << endl;
    cout << "add of f" << ptr3 << endl;
    return 0;
}
