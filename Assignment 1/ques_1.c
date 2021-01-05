#include <stdio.h>
int main()
{
    int i = 4, j = 8, k;
    k = (j = 5 || j > 10);
    printf("%d", k);
    return 0;
}