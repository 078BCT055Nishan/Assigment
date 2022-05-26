//WAP to find simple interest
#include<stdio.h>
#include<conio.h>
void main(){
float p, t, r, i;
printf("Enter the principal amount: ");
scanf("%f", &p);
printf("Enter the rate: ");
scanf("%f", &r);
printf("Enter the time: ");
scanf("%f", &t);
i=p*t*r/100;
printf("The simple interest is: %f", i);
getch();
}
