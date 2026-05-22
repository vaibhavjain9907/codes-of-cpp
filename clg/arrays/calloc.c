#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr = &n;
    scanf("enter n %d", &n);
    ptr = ((int *)malloc(n * sizeof(int)));
    if (ptr == NULL)
    {
        printf("insfcnt memory");
    }
    else
    {
        printf("memory allocated \n");
        printf("adress of ptr %p", ptr);
    }
}