#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

private:
    int g;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
class Male : private Human
{
public:
    string color;
    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
    // if we use private in human class then you cannot use getter it will throw error
    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    // Male obj1;
    // cout << obj1.age << endl;
    // cout << obj1.height << endl;
    // cout << obj1.weight << endl;
    // cout << obj1.color << endl;
    // obj1.setWeight(84);
    // cout << obj1.weight << endl;
    // obj1.sleep();
    Male m1;
    // not accessible in private and protected but cane be accesses using getter
    // cout << m1.height << endl;
    cout << m1.getHeight();

    return 0;
}