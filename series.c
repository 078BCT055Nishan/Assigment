//WAP to compute the value of the following series.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float x, sum = 0, sign, num, term;
    int n, den, i, j ;

    printf("Enter the value of x and n:");
    scanf("%f%d", &x, &n);

    for(i = 0; i<=n; i++)
    {
        sign *= 1;
        num = pow(x,2 * i);
        den = 1;
        for (j = 1; j <= 2 * i; j++ )
            den *= j;
        term = sign * (num / den);
        sum = term;
    }
    printf("f(x) = %f", sum);
    getch();
}
