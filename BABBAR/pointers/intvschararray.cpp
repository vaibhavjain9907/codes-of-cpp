#include <iostream>
using namespace std;
void update(int *p)
{
    *p = *p + 1;
    cout << "inside : " << *p << endl;

    cout << "inside : " << p << endl;
}
int getsum(int arr[], int n)
{
    cout << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "ancde";
    cout << arr << endl;
    cout << ch << endl;
    char *c = &ch[0];
    cout << c << endl;
    char temp = 'x';
    char *p = &temp;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
*/

    int value = 5;
    int *p = &value;
    cout << "before update : " << *p << endl;

    cout << "before update : " << p << endl;
    update(p);
    cout << "After update : " << *p << endl;
    cout << "After update : " << p << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "sum is " << getsum(arr, 5);
    return 0;
}