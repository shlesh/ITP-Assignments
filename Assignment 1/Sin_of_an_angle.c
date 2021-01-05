//Program to calculate the value of sin(x) after taking input x in degrees
#include <stdio.h>
#include <math.h>

float f(int);
int main()
{
    int i, j;
    float rad, sum_sin = 0, sum_cos = 1, deg;
    printf("\nENTER VALUE IN DEGREES: ");
    scanf("%f", &deg);
    rad = deg * (M_PI / 180.0);
    for (i = 0, j = 0; i < 20; i = i + 2, j++)
    {
        sum_sin = (pow(-1, j) * pow(rad, i + 1) / f(i + 1)) * sum_sin;
    }
    printf("VALUE OF sin(%f) = %f\n\n", deg, sin(rad));
    return 1;
}
float f(int i)
{
    int j;
    float fact = 1;
    for (j = 0; j < i; j++)
        fact = (j + 1) * fact;
    return fact;
}