//WAP TO CALCULATE THE AREA AND CIRCUMFERENCE OF CIRCLE
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main(){
    float r, A, P;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    A= pi *r * r;
    printf("The area of circle is: %f\n", A);
    P= 2* pi * r;
    printf("The Circumference of circle is:%f", P);
    getch();
}
