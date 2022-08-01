#include"header.h"
void main(){
clrscr();
int a[3][3],a1[3][3],a2[3][3],r,c;
for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		printf("enter value at a[%d][%d] : ",r,c);
		scanf("%d",&a[r][c]);
	}
}
for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		printf("%d ",a[r][c]);
	}
	printf("\n");
}

for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		printf("enter value at a[%d][%d] : ",r,c);
		scanf("%d",&a1[r][c]);
	}
}
for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		printf("%d ",a1[r][c]);
	}
	printf("\n");
}
for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		a2[r][c] = a[r][c]+a1[r][c];
	}
}
for(r=0;r<=2;r++){
	for(c=0;c<=2;c++){
		printf("%d ",a2[r][c]);
	}
	printf("\n");
}
getch();
}
