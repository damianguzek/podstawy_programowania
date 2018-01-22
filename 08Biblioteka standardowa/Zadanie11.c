#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funkcja(char napis1[], char napis2[])
{
	int i=0;
	int n =strlen(napis1);
	int m =strlen(napis2);
	if(m==n)

	{
		for(i=0;i<n;i++)
		{
			if(napis1[i]==napis2[i])
			{
				continue;
			} 
			else
			{
				break;
				return false;
			}
		}
		return true;
	}
	else return false;
}

int main() {
	
	char napis1[20];
	gets(napis1);
	char napis2[20];
	gets(napis2);
	
	printf(funkcja(napis1,napis2)? "takie same napisy":"inne napisy");
	
	return 0;
}
