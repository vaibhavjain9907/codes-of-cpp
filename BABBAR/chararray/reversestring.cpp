#include <iostream>
using namespace std;
char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolowercase(arr[s]) != tolowercase(arr[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[])
{
    int s = 0;
    int e = getlength(arr) - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    char arr[20];
    cout << "enter name : ";
    cin >> arr;
    int len = getlength(arr);
    cout << "length : " << len << endl;
    reverse(arr);
    cout << "reversed :" << arr << endl;
    cout << "palindrome or not : " << palindrome(arr, len) << endl;
    cout << "lowercase : " << tolowercase('c') << endl;
    cout << "uppercase : " << tolowercase('A');
}