#include <stdio.h>
int main()
{
    static int x = 3;
    x++;
    if (x <= 5)
    {
        printf("hi");
        main();
    }
}