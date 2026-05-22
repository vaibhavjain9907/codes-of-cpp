#include <iostream>
#include <cstring>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    char *name;
    // static esa data member jisko acces krne ke liye object bnane ki need nhi hoti
    static int timetocomplete;
    // ye class ko belong krta h object ko nhi
    Hero()
    {
        name = new char[100];
        cout << "simple construcotr" << endl;
    }

    Hero(int health)
    {
        this->health = health;
    }
    // parameterized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor self
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // static functions do not have ->this keyword
    static int random()
    {
        return timetocomplete;
        // cout << this->health;
        // above line give error
    }
    void print()
    {
        cout << endl;

        cout << "[name: " << this->name << " ";
        cout << "health: " << this->health << " ";
        cout << "level " << this->level << " ]";
        cout << endl;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    // destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};
// initialization scope resoultion operator
int Hero::timetocomplete = 40;

int main()
{

    cout << Hero::timetocomplete << endl;
    Hero a;
    cout << a.timetocomplete << endl;
    cout << Hero::random;

    //     // sttaic no need to delete manually
    //     Hero a;
    //     Hero c;
    //     // dynamic
    //     Hero *b = new Hero();
    //     // manually destructor called mandatory to use delete because of dynamic creation
    //     delete b;
    //     // Hero h1;
    // h1.sethealth(20);
    // h1.gethealth();
    // h1.setlevel('C');
    // h1.print();
    // Hero h1;
    // cout << "size is: " << sizeof(h1) << endl;
    // Hero suresh(70, 'C');

    // Hero ritesh(suresh);
    // ritesh.health = suresh.health;
    // ritesh.level = suresh.level;
    // ritesh.print();
    // suresh.print();
    // Hero hero1;

    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[8] = "vaibhav";
    // hero1.setName(name);
    // // hero1.print();
    // //  use default copy constructor
    // Hero hero2(hero1);
    // //  hero2.print();
    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();
    return 0;
}