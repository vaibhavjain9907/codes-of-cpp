#include<iostream>
using namespace std;
void reachHome(int src,int dest){
        cout << "source : " << src <<"  "<<  "destination: " << dest << endl;

    if(src == dest){
        cout << "reached home " << endl;
        return ;
    }
    src++;
    reachHome(src,dest);
}
int main(){
    int src ;
    cout << "enter source: " ;
    cin >>src;
    int dest ;
    cout << "enter destination: ";
    cin>>dest;
    reachHome(src,dest);
}