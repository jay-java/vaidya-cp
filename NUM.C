#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char name1[]="JAVA";
	char name2[]="jAVA";
	int i;
	clrscr();
	i = strcmp(name1,name2);
	printf("i = %d",i);
	getch();
}