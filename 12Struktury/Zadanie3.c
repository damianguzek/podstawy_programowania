#include <stdio.h>
#include <stdbool.h>
typedef struct wektor{
	bool zwrot;
	float wartosc;
	int ax;
	int ay;
	int bx;
	int by;
}w;

w funkcja(w *w){
	w->zwrot=!w->zwrot;
}

int main(){
	w b;
	b.zwrot=1;
	funkcja(&b);
	printf("%d",b.zwrot);
}