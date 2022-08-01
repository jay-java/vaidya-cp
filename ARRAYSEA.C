#include"header.h"
void main(){
int a[1],i,counter=0,num;
//int b=3;
clrscr();
/*if(b != 2){
	printf("yes\n");
}
else{
	printf("no\n");
} */
for(i=0;i<=4;i++){
printf("enter value at a[%d] : ",i);
scanf("%d",&a[i]);
}
printf("enter number to search in array : ");
scanf("%d",&num);
for(i=0;i<=4;i++){
	if(num == a[i]){
		counter++;
	}
}
if(counter==1){
	printf("yes");
}
else{
	printf("no");
}
getch();
}
