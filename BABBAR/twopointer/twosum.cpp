#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout <<"enter array size: " ;
    cin >> n;

    int arr[n]= {};
    for(int i = 0 ; i < n ; i++){
        cout << "enter value for index  " << i << " " ;
        cin >> arr[i] ;
    }
    int target;
    cout << "enter target value: ";
    cin >> target;
    sort(arr,arr+n);
    int i = 0;
    int j = n-1;
    while(i < j){
       
            if(arr[i] + arr[j] == target){
                cout << "number 1 "<< arr[i] << " " << "number 2 " << arr[j];
                return 0;
            }
            else if(arr[i] + arr[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
    
    return 0;
}