#include <stdio.h>
#include <stdlib.h>
void funkcja(int tab1[], int tab2[], int r){
	int k, i;
	for(i=0;i<r;i++){
		k=tab1[i];
		tab1[i]=tab2[i];
		tab2[i]=k;
	}	
}


int main() {
	int i;
	int tab1[5]={1,2,3,4,5};
	int tab2[5]={6,7,8,9,10};
	for(i=0;i<5;i++){
		printf("%d\t%d\n", tab1[i], tab2[i]);
	}
	printf("\n");
	funkcja(tab1,tab2,5);
	for(i=0;i<5;i++){
		printf("%d\t%d\n", tab1[i], tab2[i]);
	}
	return 0;
}
