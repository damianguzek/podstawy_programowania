#include <stdio.h>
//Napisz program, kt�ry pobierze ze standardowego wej�cia (czyli od u�ytkownika) po kolei warto�ci a, x oraz b oraz wy�wietli warto�� funkcji y= ax + b.

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
