#include <iostream>
using namespace std;
int power(int a, int b)
{

    int ans = 1; 
    for (int i = 0; i < b; i++)
    {
        ans = ans * a; 
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = power(a, b);
    cout << result << endl; 

    int c, d;
    cin >> c >> d;
    int result1 = power(c, d);
    cout << result1;
    return 0;
}