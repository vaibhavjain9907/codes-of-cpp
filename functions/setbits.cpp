#include <iostream>
using namespace std;
int setbitof(int num)
{
    int count = 0;
    while (num != 0)
    {
        if ((num & 1) == 1)
        {
            count += 1;
        }
        num = num >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int set_bit_of_a = setbitof(a);
    int set_bit_of_b = setbitof(b);
    cout << set_bit_of_a + set_bit_of_b;
    return 0;
}