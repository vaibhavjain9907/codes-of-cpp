#include<iostream>
using namespace std;
void print(int n){
    if(n == 0){
        return ;
    }
    //head recursive
    print(n-1);
    cout << n << endl ;
    
}
int main(){
    int n;
    cout << "enter value of n : ";
    cin >> n;
    print(n);
}