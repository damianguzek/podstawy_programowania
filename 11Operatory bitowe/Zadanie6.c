#include <stdio.h>

int funkcja(int liczba, int dzielnik){
	return liczba>>dzielnik;
}
int main(){
	int liczba, dzielnik;
	scanf("%d %d",&liczba, &dzielnik);
	printf("%d",funkcja(liczba,dzielnik));
return 0;
}