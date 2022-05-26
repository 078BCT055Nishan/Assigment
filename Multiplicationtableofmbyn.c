//WAP to display the multiplication table of m by n
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,m,n;
    printf("Enter the boundaries to calculate M.T");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m,i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d X %d= %d",i,j,i*j);
            printf("\n");
        }
        printf("\n");
    }
    getch();
}
