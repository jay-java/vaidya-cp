#include"header.h"
void fun(){    //function definition
	printf("this is fun function\n");
}
void run(); //function declaration
void main(){
	int i;
	clrscr();
	run();
	for(i=1;i<=10;i++){
		fun();  //function calling
	}
	printf("hello printf function\n");

	getch();
}

void run(){  //function definition
	printf("this is run function\n");
}