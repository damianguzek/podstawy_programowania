#include <stdio.h>
	//Napisz program, który pobierze ze standardowego wejœcia d³ugoœæ podstawy trójk¹ta oraz wysokoœæ, a nastêpnie wypisze na wyjœciu pole trójk¹ta.

int main(){
	int a;
	int h;
	printf("pofaj a i b\n");
	
	scanf("%d", &a);
	scanf("%d",&h);
	double pole=(a*h)/2;
	printf("pole to\n");
	printf("%f",pole);
return 0;
}
