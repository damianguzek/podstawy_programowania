#include <stdio.h>

typedef struct alkochole{
	float moc;
	int pojemnosc;
	char *nazwa;
}a;

a funkcja(a *alk, int rozmiar){
	int i,naj;
	i=0;
	naj=i;
	for(i;i<rozmiar;i++){
		if(alk[i].pojemnosc*alk[i].moc>alk[naj].pojemnosc*alk[naj].moc)
			naj=i;
	}
	return alk[naj];
}

int main(){
	a alk[4];
	
	a alk0={0.80,30,"biimber"};
	a alk1={0.40,50,"wodka"};
	a alk2={0.12,200,"wino"};
	a alk3={0.06,500,"piwo"};
	
	alk[0]=alk0;
	alk[1]=alk1;
	alk[2]=alk2;
	alk[3]=alk3;
	
	printf("%s",funkcja(alk,4).nazwa);
	return 0;
}