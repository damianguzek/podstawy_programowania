#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int max;
int main()
{
	int a,b,c;
	printf("Podaj trzy zmienne: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b&&a>c)
		max=a;
	else if(b>a&&b>c)
		max=b;
	else
		max=c;
	printf("%d",max);
	
	
}
