#include<stdio.h>

int main()
{
	int a1,a2,b1,b2,n;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&b1);
	scanf("%d",&b2);
	scanf("%d",&n);
	if(a1>b1){
		do{
			printf("%d ",a1);
			a1++;
			if(a1>a2||a1>b2){
				break;
			}
			
		}
		while(a1<=a2);
	}
	else if(a1<b1){
		do{
			printf("%d ",b1);
			b1++;
			if(b1>a2||b1>b2){
				break;
			}
			
		}
		while(b1<=a2);
	}

	return 0;
}