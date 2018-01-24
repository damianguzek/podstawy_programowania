#include <stdio.h>

int funkcja(int liczba, int bit){
	return liczba & 1<<(bit-1);
}

int main(){
	int liczba,bit;
	scanf("%d %d",&liczba, &bit);
	printf(funkcja(liczba, bit)?"jest ustawiony":"nie jest ustawiony");
	return 0;
}