#include <stdio.h>
#include <stdlib.h>


void funkcja(char tab1[], int r)
{
	int i=0;
	int tab2[r];
	for(i=0;i<r;i++)
	{
		tab2[i]=tab1[i];
	}
	for(i=0;i<r;i++)
	{
		printf("%c", tab2[i]);
	}
}


int main() {
	int n;
	scanf("%d\n", &n);
	char napis[100];
	gets(napis);
	
	funkcja(napis,n);
	return 0;
}
