#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funkcja(int tab1[], int tab2){
	int tab3[50];
	strcpy(tab3, tab1);
	strcat(tab3, tab2);
	puts(tab3);
}



int main() {
	char napis1[15]="Ala ma kota  ";
	char napis2[15]="Sierotka MaRysia";
	
	funkcja(napis1,napis2);
	
	return 0;
}


//
//
//
//int main(int argc, char *argv[]) {
//	char napis1[]="Ala ma ";
//	char napis2[]="kota";
//	char napis3[30];
//	
//	strcpy(napis3,napis1);
//	strcat(napis3,napis2);		
//	puts(napis3);
//	
//	return 0;
//}
