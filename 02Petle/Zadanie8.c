#include<stdio.h>

int main(){
	int a,b;
	printf("Podaj a i b");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("y=%dx+%d\n",a,b);
	if(a>0&&b>0)
		printf("Prosta przechodzi przez 1,2,3 cwiartke");
	else if(a>0&&b<0)
		printf("Prosta przechodzi przez 1,3,4 cwiartke");
	else if (a<0&&b>0)
		printf("Prosta przechodzi przez 1,2,4 cwiartke");
	else if (a<0&&b<0)
		printf("Prosta przechodzi przez 2,3,4 cwiartke");
	else if (a==0&&b>0)
		printf("Prosta przechodzi przez 1,2 cwiartke");
	else if (a==0&&b<0)
		printf("Prosta przechodzi przez 3,4 cwiartke");
	else if (a>0&&b==0)
		printf("Prosta przechodzi przez 1,3 cwiartke");
	else if (a<0&&b==0)
		printf("Prosta przechodzi przez 2,4 cwiartke");
	return 0;
}