#include <stdio.h>
	//Napisz program, który pobierze ze standardowego wejœcia po kolei cztery ró¿ne litery oraz wypisze na standardowym wyjœciu wszystkie mo¿liwe kombinacje s³ów z³o¿onych z tych liter.

int main(){
	char a;
	char b;
	char c;
	char d;

	scanf("%c %c %c %c", &a,&b,&c,&d);
	
	printf("%c %c %c %c\n", a,b,d,c);
	printf("%c %c %c %c\n", a,c,b,d);
	printf("%c %c %c %c\n", a,d,c,b);
	printf("%c %c %c %c\n", a,b,c,d);
	
	printf("%c %c %c %c\n", b,a,d,c);
	printf("%c %c %c %c\n", b,c,a,d);
	printf("%c %c %c %c\n", b,d,c,a);
	printf("%c %c %c %c\n", b,a,c,d);

	printf("%c %c %c %c\n", c,b,d,a);
	printf("%c %c %c %c\n", c,a,b,d);
	printf("%c %c %c %c\n", c,d,a,b);
	printf("%c %c %c %c\n", c,b,a,d);
	
	printf("%c %c %c %c\n", d,b,a,c);
	printf("%c %c %c %c\n", d,c,b,d);
	printf("%c %c %c %c\n", d,a,c,b);
	printf("%c %c %c %c\n", d,b,c,a);
return 0;
}
