#include<stdio.h>
#include<conio.h>
void main(){
	int bs,hra,da,ta,gs;
	clrscr();

	printf("Enter base salary of employer:");
	scanf("%d",&bs);

	hra=(10*bs)/100;
	da=(8*bs)/100;
	ta=(5*bs)/100;
	gs=hra+da+ta+bs;

	printf("gross salary = %d",gs);
	getch();
}