#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *f;
	int suma=0;
	f = fopen("pliczek.txt", "r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	char c;
	while((c = fgetc(f))!=EOF)
	suma+=1;
	printf("%d", suma);
fclose(f);
return 0;
}
