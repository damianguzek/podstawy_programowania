#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, max;
	int tablica[5]={99,100,2,2000,5};
	max=tablica[0];
	
	for(i=1;i<5;i++){
		if(max<tablica[i]){
			max=tablica[i];
		}
		else continue;
	}
	
	printf("%d",max);
	return 0;
}
