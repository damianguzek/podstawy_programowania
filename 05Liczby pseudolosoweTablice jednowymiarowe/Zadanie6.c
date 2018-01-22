#include <stdio.h>
#include <stdlib.h>

int funkcja(int tab1[],int tab2[], int tab3[], int n){
	int i,a=0,b=0;
	for(i=0;i<2*n;i++)
	{
		if(i%2==0)
			tab1[i]=tab2[i/2];
		else
		 	tab1[i]=tab3[i/2];
	}
}
int main(int argc, char *argv[]) {
	int rozmiar=5, i;
	int tab[2*rozmiar]; 
	int tab1[5]={1,1,1,1,1};
	int tab2[]={0,0,0,0,0};
	funkca(tab,tab1,tab2,rozmiar);
	
	for(i=0;i<2*rozmiar;i++){
		printf("%d\n\n", tab[i]);
		
	}
	
	return 0;
}
