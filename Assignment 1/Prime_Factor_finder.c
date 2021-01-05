/*Program to find prime factors for a given number*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i = 1, j, k = 0;
    printf("\nPlease punch in a number: ");
    scanf("%d", &num); /* takes the input */
    while (i <= num)
    {
        k = 0;
        if (num % i == 0) /*checks for factor */
        {
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    k++;
                }
            }
            if (k == 2) /* checks for the prime factor */
                printf("\n%d is a prime factor", i);
        }
        i++;
    }
    return 0;
}