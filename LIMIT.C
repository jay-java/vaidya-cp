#include"header.h"
void main(){
	int i[2],index;
	clrscr();
	for(index=0;index<=4;index++){
		printf("enter value at index i[%d] : ",index);
		scanf("%d",&i[index]);
	}
	for(index=0;index<=4;index++){
		printf("i[%d] : %d\n",index,i[index]);
	}
	getch();
}