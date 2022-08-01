#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,age,marks,lang;
	clrscr();
	printf("enter i = ");
	scanf("%d",&i);
	printf("i = %d\n",i);
	printf("enter j = ");
	scanf("%d",&j);
	printf("j = %d\n",j);
	// conditional statement
	//1.simple
	if(i>j){
		printf("i is greater than j\n");
	}

	//2.if else
	if(i>j){
		printf("i is greter than j\n");
	}
	else{
		printf("j is greater than i\n");
	}
	//3.nested if
	printf("enter age : ");
	scanf("%d",&age);
	if(age>18){
		if(age<60){
			printf("eligible for donate blood\n");
		}
		else{
			printf("age is above 60\n");
		}
	}
	else{
		printf("age is less than 18\n");
	}
	//4.else if ladder
	printf("enter marks : ");
	scanf("%d",&marks);
	if(marks<35){
		printf("fail");
	}
	else if(marks>=35 && marks<=50){
		printf("D grade");
	}

	else if(marks>=51 && marks<=70){
		printf("C grade");
	}
	else if(marks>=71 && marks<=80){
		printf("B grade");
	}
	else if(marks>=81 && marks<=90){
		printf("A grade");
	}
	else if(marks>=91 && marks<=100){
		printf("A+ grade");
	}
	else{
		printf("invalid input");
	}
	//5.switch case
	printf("\n1.for english\n2.for hindi\n3.for gujarati");
	scanf("%d",&lang);
	switch(lang){
		case 1:
			printf("You selected English");
			break;
		case 2:
			printf("You selected hindi");
			break;
		case 3:
			printf("You selected gujarati");
			break;
		default:
			printf("invalid input");
	}
	getch();
}