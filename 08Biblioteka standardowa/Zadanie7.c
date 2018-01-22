#include <stdio.h>
#include <stdlib.h>


int funkcja(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	return a/b;
}



int main() {
	printf("%d", funkcja());
	return 0;
}
