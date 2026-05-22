#include <iostream>
using namespace std;
class Studentt
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Studentt s1;
    cout << "hello";
    return 0;
}