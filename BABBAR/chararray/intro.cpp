#include <iostream>
using namespace std;
int main()
{

    char array[20];
    cout << "enter name : ";
    cin >> array;
    array[2] = '\0';

    cout << array;
    return 0;
}
