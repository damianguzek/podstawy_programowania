#include<stdio.h>

int main(){
	printf("Jakie dzia³anie wybierasz:\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie");
	int i,a,b,wynik;
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		printf("Podaj a:");
		scanf("%d",&a);
		printf("Podaj b:");
		scanf("%d",&b);
		wynik=a+b;
		printf("%d+%d=%d",a,b,wynik);
		break;
		case 2:
		printf("Podaj a:");
		scanf("%d",&a);
		printf("Podaj b:");
		scanf("%d",&b);
		wynik=a-b;
		printf("%d-%d=%d",a,b,wynik);
		break;
		case 3:
		printf("Podaj a:");
		scanf("%d",&a);
		printf("Podaj b:");
		scanf("%d",&b);
		wynik=a*b;
		printf("%d*%d=%d",a,b,wynik);
		break;
		case 4:
		printf("Podaj a:");
		scanf("%d",&a);
		printf("Podaj b:");
		scanf("%d",&b);
		wynik=a/b;
		printf("%d/%d=%d",a,b,wynik);
		break;
		
	}

