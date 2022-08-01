#include"header.h"
void call(int i){
	printf("i = %d\n",i);
}
void fun(char c){
	printf("c = %c\n",c);
}
void main(){
	clrscr();
	call(12);
	fun('d');
	getch();
}