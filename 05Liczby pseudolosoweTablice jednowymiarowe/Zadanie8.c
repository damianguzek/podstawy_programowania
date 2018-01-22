#include <stdio.h>
#include <stdlib.h>

void funkcja(){
	int i,j, k,z;
	int tablica[10];
	
	for(i=0;i<10;i++){
		scanf("%d", &k);
			if(i>0){
				for(j=0;j<i;j++)
				 if(k!=tablica[j])
				 	tablica[i]=k;
				 else
				 {
				 	--i;
				 	printf("Ale to juz bylo i nie wroci wiecej\n dawaj inna liczbe bydlaku\n");
				 		for(z=0;z<=i;z++){
				 			printf("%d\n", tablica[z]);
						 }
				 }	
			}
			else
				tablica[i]=k;
	}
}





int main() {
	funkcja();
	return 0;
}
