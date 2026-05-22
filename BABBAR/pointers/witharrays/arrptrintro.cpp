#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {2, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /*cout << "1. address of first blck of array: " << arr << endl;
    cout << "2. address of first blck of array: " << &arr[0] << endl;
    cout << "3. address of first blck of array: " << arr[0] << endl;
    cout << "4. address of first blck of array: " << *arr << endl;
    cout << "5. address of first blck of array: " << *arr + 1 << endl;
    cout << "6. address of first blck of array: " << *(arr + 1) << endl;
    cout << "7. address of first blck of array: " << (*arr) + 1 << endl;
    cout << "8. address of first blck of array: " << *(arr) + 1 << endl;
    cout << "9. address of first blck of array: " << *(arr + 1) << endl;
    cout << "10. address of first blck of array: " << *(1 + arr) << endl;

    int temp[10];
    cout << sizeof(temp) << endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
   */
    int arrr[10] = {1};
    // not assignable arr = arr + 1; give error
    cout << arrr << endl;
    int *p = &arrr[0];
    p = p + 1;
    cout << p;
    return 0;
}