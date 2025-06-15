/*#include <iostream>
using namespace std;
int update(int a) // agr 50 output chahiye to (int &a) use hoga // pass by value ka concept
{
    a = a / 2;
    return a;
}
int main()
{
    int a = 100;
    update(a);
    cout << a << endl; // 50 // glt h // 100 hoga output
    return 0;
}*/
/*#include <iostream>
using namespace std;
int update(int a)
{
    a -= 5;
    return a;
}
int main()
{
    int a = 15;
    update(a);
    cout << a << endl; // 15
    return 0;
}*/
#include <iostream>
using namespace std;
int update(int a)
{
    int ans = a * a;
    return ans;
}
int main()
{
    int a = 14;
    a = update(a);
    cout << a << endl;// 196
}