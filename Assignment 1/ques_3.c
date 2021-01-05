#include <stdio.h>
int main()
{
    int i = -3, j = 3;
    if (!i + !j)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }

    return 0;
}