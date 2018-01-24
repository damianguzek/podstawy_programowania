#include <stdio.h>
typedef struct trojkat{
	int a,b,c;
}t;

int funkcja(t a){
	return a.a+a.b+a.c;
}

int main(){
	t a = {4,5,6};
	printf("%d",funkcja(a));
	return 0;
}