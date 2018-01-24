#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a,b,c,del;
	float x1,x2,t;
	printf("podaj pierwiastki rownania: \na: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	printf("%fx^2+%fx-%f=0\n",a,b,c);
	del=b*b-4*a*c;
	printf("Delta= %f\n",del);
	if(del>0)
	{
		t=sqrt(del);
		printf("Pierwiastek z delty: %f\n",t);
	x1=(-b-t)/2*a;
	x2=(-b+t)/2*a;
	printf("x1=%f\nx2=%f",x1,x2);
	}
	else if(del==0)
	{
		x1=(-b)/(2*a);
		printf("x1=%f",x1);
	}
	else
	{
		printf("Delta mniejsza od 0\nBrak rozwiazan");
	}
	return 0;
}
