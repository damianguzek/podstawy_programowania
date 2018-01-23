#include <stdio.h>
//Napisz program, który pobierze ze standardowego wejœcia (czyli od u¿ytkownika) po kolei wartoœci a, x oraz b oraz wyœwietli wartoœæ funkcji y= ax + b.

int main(){
	int a;
	int x;
	int b;
	printf("podaj a");	scanf("%d", &a);
	printf("podaj x");	scanf("%d", &x);
	printf("podaj b");	scanf("%d", &b);
	printf("pole jest rowne");
	printf("%d", (a*x)+b);
return 0;
}
