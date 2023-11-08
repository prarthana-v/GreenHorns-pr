#include<stdio.h>
#include<conio.h>
void main(){

  int c;
  float f;
  clrscr();

  printf("Enter temperature in celsius:");
  scanf("%d",&c);

  f = (c*9/5)+32;

  printf("Temperature in fehrenheit: %f",f);

  getch();
}

