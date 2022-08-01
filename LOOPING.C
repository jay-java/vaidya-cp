#include"header.h"
void main(){
	int i,j=1,k=9;
	clrscr();
	printf("using for loop\n");
	for(i=1;i<=5;i++){    //entry control loop
		printf("%d\n",i);
	}
	printf("using while loop\n");
	while(j<=5){          //entry control loop
		printf("%d\n",j);
		j++;
	}
	printf("do while loop\n");
	do{                //exit control loop
		printf("%d\n",k);
		k++;
	}
	while(k<=5);
	getch();
}