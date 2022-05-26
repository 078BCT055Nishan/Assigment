//WAP to draw a chess board
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 8; i++)
    {
        for (j=1; j <=8; j++)
        {
            if((i+j) % 2 == 0)
                printf("\xdb"); //it print the white block
                else
                printf(" "); //by default it has black block
        }
        printf("\n");
    }
    getch();
}
