#include <stdio.h>

int funkcja(int wykladnik){
	return 1<<wykladnik;
}

int main(){
	int wykladnik;
	scanf("%d",&wykladnik);
	printf("%d",funkcja(wykladnik));
	
	return 0;
}