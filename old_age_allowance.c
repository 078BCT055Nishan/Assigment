//WAP to test the eligibility for old age allowance

#include<stdio.h>
#include<conio.h>
void main(){
int age;
printf("Enter the age of the person:");
scanf("%d", &age);
if(age >= 70){
    printf("Eligible for Old Age Allowance!!");
}
else{
    printf("Sorry, Not Eligible for Old Age Allowance");
}
getch();
}
