#include <iostream>
using namespace std;
int main()
{
    int note;
    cout << "enter value of note : ";
    cin >> note;
    int rmndr1, rmndr2, rmndr3, rmndr4;
    switch (1)
    {
    case 1:
    {
        int count100 = note / 100;
        rmndr1 = note % 100;
        cout << "100 notes :" << count100 << endl;
    }
    case 2:
    {
        int count50 = rmndr1 / 50;
        rmndr2 = rmndr1 % 50;
        cout << "50 notes :" << count50 << endl;
    }
    case 3:
    {
        int count20 = rmndr2 / 20;
        rmndr3 = rmndr2 % 20;
        cout << "20 noteS : " << count20 << endl;
    }
    case 4:
    {
        int count1 = rmndr3 / 1;

        cout << "1 note:" << count1 << endl;
        break;
    }
    }
}
