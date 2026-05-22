#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    int *ptr1;

    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n, sizeof(int));
    if (ptr == NULL || ptr1 == NULL)
    {
        printf("insuffecient memory");
        exit(0);
    }
    else
    {
        printf("memory scsfly allocatd  %p \n", ptr);
        printf("memory allocated %p", ptr1);
        free(ptr);
        free(ptr1);
    }
    return 0;
}