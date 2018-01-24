#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *f;
	f=fopen("tabliczka.txt", "w");
	int i, j;
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				fprintf(f,"%d\t", i*j);
			}
			fprintf(f,"\n");
		}
	
fclose(f);	

	return 0;
}
