#include"header.h"
void main(){
	int i[] = {1,2,3,4,5};
	int index;
	clrscr();
	/*printf("i = %d\n",i[0]);
	printf("i = %d\n",i[1]);
	printf("i = %d\n",i[2]);
	printf("i = %d\n",i[3]);
	printf("i = %d\n",i[4]);*/
	for(index = 0;index<=4;index++){
		printf("value at index[%d] is : %d\n",index,i[index]);
	}
	getch();
}