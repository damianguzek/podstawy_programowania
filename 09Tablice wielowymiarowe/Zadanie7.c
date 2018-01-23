#include <stdio.h>
#include <stdlib.h>

int **funkcja(int a, int b)
{
	int i;
	int **tab=malloc(a*sizeof(int**));
	for(i=0;i<a;i++)
	{
		tab[i]=malloc(b*sizeof(int*));
	}
	return tab;
}

int wypelnij(int **tab,int a, int b)
{
	int i, j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d", &tab[j][i]);
		}
	}
return tab;
}

void mnozenie(int **tab1,int **tab2,int **tab3,int a)
{
	int i, j,k, suma=0;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			for(k=0;k<a;k++)
			{
				suma=suma+(tab1[i][k]*tab2[k][j]);
			}
			tab3[i][j]=suma;
			suma=0;
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
			printf("%d ", tab3[i][j]);
	printf("\n");
	}
	
}












int main(int argc, char *argv[]) {
	int a=3,  b=3;
	int **tablica1=funkcja(a,b);
	int **tablica2=funkcja(a,b);
	int **tablica3=funkcja(a,b);
	wypelnij(tablica1,a,b);
	wypelnij(tablica2,a,b);
	mnozenie(tablica1,tablica2,tablica3,a);
	return 0;
}
