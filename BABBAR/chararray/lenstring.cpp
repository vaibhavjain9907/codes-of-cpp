#include <iostream>
using namespace std;
int getlength(char arr[])
{

    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
        cout << (arr[i]) << endl;
    }
    return count;
}
int main()
{

    char arr[20];
    cout << "enter name : ";
    cin >> arr;

    cout << getlength(arr);
    return 0;
}