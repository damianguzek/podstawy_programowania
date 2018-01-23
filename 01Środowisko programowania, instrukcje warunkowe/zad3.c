#include<stdio.h>

int main()

{
int a,b,pl,mi,ra,pr;
double dz;
printf ("Podaj a: "); scanf("%d",&a);
printf ("Podaj b: "); scanf("%d",&b);
	
pl = a + b;
mi = a - b;
ra = a * b;
dz = a / b;
pr = a % b;
printf("Dod. %d, Odej. %d, Mno¿. %d, Dziel. %, Pr. %d",pl,mi,ra,dz,pr);
return 0;
}
