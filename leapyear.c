#include<stdio.h>
#include<conio.h>
void main(){
int year;
printf("Enter the any year:\n");
scanf("%d", &year);
if(year % 4 == 0 ){
    printf("%d is leap year.",year);
}
else {
    printf("NOT A LEAP YEAR");
}
getch();
}
