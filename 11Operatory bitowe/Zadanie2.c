#include <stdio.h>

int funkcja(int liczba){
	return liczba & (liczba - 1);
}

int main(){
	int liczba;
	scanf("%d",&liczba);
	printf(funkcja(liczba)?"nie jest potega dwojki":"jest potega dwojki");
	return 0;
}
