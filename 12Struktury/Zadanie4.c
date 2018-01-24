#include <stdio.h>
#include <math.h>
typedef struct zespolona{
	float r, u;	
}z;

float modul(z *a){
	float modul=sqrt(pow(a->r,2)+pow(a->u,2));
	return modul;	
}

z suma(z *a, z *b){
	z wynik={ (a->r + b->r),(a->u + b->u)};
	return wynik;
} 

z iloczyn(z *a, z *b){
	z iloczyn = {(a->r*b->r-a->u*b->u),(a->r*b->u+b->r*a->u)};
	return iloczyn;
}

int main(){
	z a={2,5};
	z b={4,3};
	z sum = suma(&a,&b);
	z il = iloczyn(&a,&b);
	printf("Modul: %f\n",modul(&a));
	printf("Suma: %f+%fi",sum.r,sum.u);
	printf("\nIloczyn: %f+%fi",il.r,il.u);
	return 0;
}