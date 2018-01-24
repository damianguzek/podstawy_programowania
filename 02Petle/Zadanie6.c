#include<stdio.h>

int main(){
	int i,a;
	for(i=1;i<10;i++)
	{
		for(a=1;a<10;a++){
			printf("%d ",a*i);
		}
		printf("\n");
	}
}