
#include <stdio.h>

int funkcja(int liczba){
	return liczba & 1;
}

int main(){
	int liczba;
	scanf("%d",&liczba);
	printf(funkcja(liczba)?"Nie parzysta":"Parzysta");
	return 0;
}