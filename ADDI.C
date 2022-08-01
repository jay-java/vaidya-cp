#include<stdio.h>
#include<conio.h>
void main(){
	int p,r,t;
	int si;
	clrscr();
	printf("enter p = ");
	scanf("%d",&p);
	printf("enter r = ");
	scanf("%d",&r);
	printf("enter t = ");
	scanf("%d",&t);
	si = (p*r*t)/100;
	printf("si = %d",si);
	getch();
}