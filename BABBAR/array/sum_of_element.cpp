#include <iostream>
using namespace std;
int sum;
int summ;
int sumarray(int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        sum = i;
        summ = i + sum;
    }
    return summ;
}
int main()
{
    int n;
    int sum;
    int array[5] = {10, 20, 30, 40, 50};
    cout << sumarray(sum, 5);
    return 0;
}
