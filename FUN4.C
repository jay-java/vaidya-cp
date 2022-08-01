#include"header.h"
int square(int i){
	printf("value of i coming from main function = %d\n",i);
	return i*i;
}
void main(){
	int i,res;
	clrscr();
	printf		("enter i = ");
	scanf("%d",&i);
	res = square(i);
	printf("square of i = %d",res);
	getch();
}