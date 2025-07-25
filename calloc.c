#include<stdio.h>
#include<stlib.h>
int main(){
    int n ;
    int* ptr = &n ;
    scanf("enter n"%d, n);
    ptr = ((int*)malloc(n* sizeof(int) ));
    if (ptr == NULL){
        printf("insfcnt memory");
    }
    else{
        printf("memory allocated");
        printf("adress of ptr %p" , ptr);
    }



}