#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *f1;
	FILE *f2;
	f1 = fopen("plik1.txt", "r");
	f2 = fopen("plik2.txt", "w");
	
	if(!f1 && !f2)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	
	char c;
	while(c=fgetc(f2)!=EOF)
		fprintf(f1,"%c",c);
	
	fclose(f1);
	fclose(f2);
	return 0;
}
