#include <stdio.h>
#include <stdlib.h>



int utworz(int n)
{
	int i=0;
	int **tab=malloc(n*sizeof(int**));
	for(i=0;i<n;i++)
	{
		tab[i]=malloc(n*sizeof(int*));
	}
	
return tab;
}

void uzupelnij(int **tab, int n)
{
	int i=0, j=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
}

int rozmiar(int **tab, int n)
{
	int i=0, suma=0;
	for(i=0;i<n;i++)
	{
		suma+=tab[i][i];
	}
	printf("%d\n", suma);
	return suma;
}

int alokacja(int r)
{
	int *tab=malloc(r*sizeof(int*));
return tab;	
}




int main() 
{
	int n;
	scanf("%d", &n);
	int **a=utworz(n);
	uzupelnij(a,n);
	int r = rozmiar(a,n);
	printf("%p",alokacja(r));
	return 0;
}
