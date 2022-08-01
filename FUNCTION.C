#include"header.h"
void fun(){    //function definition
	printf("this is fun function\n");
}

void main(){
	int i;
	clrscr();
	for(i=1;i<=10;i++){
		fun();  //function calling
	}
	printf("hello printf function\n");
	getch();
}