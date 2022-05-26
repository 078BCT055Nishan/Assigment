//WAP to find all the roots of Quadratic Equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float a, b, c, d, r1, r2, w;
printf("Enter the coefficents of Quadratic Equation");
scanf("%f%f%f"&a,&b, &c);
d= b*b-4*a*c;
if(d==0){
    r1=-b/(2*a);
    r2=-b/(2*a);
    printf("Roots are : %f and %f",r1,r2);
}
else if (d>0){
    r1=-b/(2*a) + sqrt(d)/(2*a);
    r2=-b/(2*a) -sqrt(d)/(2*a);
    printf("Roots are: %f and %f", r1,r2);
}
else {
    d *=-1; //d=d*(-1);
    w=sqrt(d)/(2*a);
    r1=-b/(2*a);
    printf("Roots are: %f and %f and ",r1,w,r1 w);
}
getch();
}
