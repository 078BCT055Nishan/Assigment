#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, m, n;
    printf("Enter the Number you wanted to read multiply table:");
    scanf("%d%d", &m, &n);

    for ( i = 1; i <= m; i++)
    {
        for( j = i; j <= n; j++)
        {
            printf("%5d x %5d = %5d",i, j , i * j);
            printf("\n");
        }
        printf("\n");
    }
    getch();
}
