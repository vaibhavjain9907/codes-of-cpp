#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n == 0){
        
        return 0;
    }
    if(n == 1){
        cout << 1 << " ";
        return 1; 
    }
    n+n-1+ fibonacci(n-2);
}
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    fibonacci(n);

}