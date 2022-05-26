//WAP to check whether an integer is palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r, sum=0,original;
    printf("Enter any integer number:");
    scanf("%d",&n);
    original = n;
    while(n!=0)
    {
        r=n%10;
        sum = sum*10+r;
        n=n/10;
    }
    if(sum==original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    getch();
}
