#include <stdio.h>
	//Napisz program, kt�ry pobierze ze standardowego wej�cia d�ugo�� podstawy tr�jk�ta oraz wysoko��, a nast�pnie wypisze na wyj�ciu pole tr�jk�ta.

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
