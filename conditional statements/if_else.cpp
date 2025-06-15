#include <iostream>
using namespace std;
int main()
{
    /*int a;
    cin >> a;
    if (a > 0)
    {
        cout << "positive";
    }
    else if (a < 0)
    {
        cout << "a is negative";
    }
    else
    {
        cout << "a is zero";
    }
    return 0;*/

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        char space = n - row + 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
