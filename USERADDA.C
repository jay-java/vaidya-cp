#include"header.h"
void main(){
	int index;
	int arr[5];
	int sum=0;
	clrscr();

	for(index = 0;index<=4;index++){
		printf("enter element at index[%d] : ",index);
		scanf("%d",&arr[index]);
	}
	for(index=0;index<=4;index++){
		printf("value at index[%d] is : %d\n",index,arr[index]);
		sum=sum+arr[index];
	}
	printf("addition of elements = %d",sum);
	getch();
}