#include"header.h"
void main(){
	int i,j;
	clrscr();
	/*
		***
		***
		***
	*/
	for(i=1;i<=5;i++){//for row
		for(j=1;j<=5;j++){     //for column
			printf("*");
		}
		printf("\n");
	}
	getch();
}