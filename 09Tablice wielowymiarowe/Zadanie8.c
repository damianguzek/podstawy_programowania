#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int funkcja(int a, int b)
{
	int i;
	char **tab=malloc(sizeof(char**)*a);
		for(i=0;i<a;i++)
		{
			tab[i]=malloc(sizeof(char*)*b);
		}
	
return tab;
}

void uzupelnij(int **tab, int a, int b)
{
	int i=0, j=0;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
}

void sprawdz(int **tab1, int **tab2, int a, int b)
{
	int i=0, j=0;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d   %d\n",tab1[i][j], tab2[i][j]);
			if(tab1[j][i]==tab2[j][i])
			{
				continue;
			}
			else break;
		}
	}
	
}




int main()
{
	int a=3, b=3;
	char **tab1=funkcja(a,b);
	char **tab2=funkcja(a,b);
	uzupelnij(tab1,a,b);
	uzupelnij(tab2,a,b);
	sprawdz(tab1,tab2,a,b);
//	printf(sprawdz(tab1,tab2,a,b)? "nie":"tak");
//	printf("%d", sprawdz(tab1,tab2,a,b));
	return 0;
}
