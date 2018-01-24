
int main(){
	int ip[4];
	int maska[4];
	printf("IP: ");
	scanf("%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3]);
	printf("Maska: ");
	scanf("%d.%d.%d.%d",&maska[0],&maska[1],&maska[2],&maska[3]);	
	int adres[4];
	int rozgloszenie[4];
	adres[3]=adres[2]=adres[1]=adres[0]=0;
	rozgloszenie[3]=rozgloszenie[2]=rozgloszenie[1]=rozgloszenie[0]=0;
	int i,j;
	for(i=0;i<4;i++){
		adres[i]=ip[i]&maska[i];
		}
	for(i=0;i<4;i++){
		for(j=0;j<8;j++){
			if(~maska[i]&(1<<j) || adres[i]&(1<<j))
				rozgloszenie[i]|=(1<<j);
		}		
	}	
	printf("Adres podsieci: %d.%d.%d.%d",adres[0],adres[1],adres[2],adres[3]);
	printf("\nAdres rozgloszeniowy: %d.%d.%d.%d",rozgloszenie[0],rozgloszenie[1],rozgloszenie[2],rozgloszenie[3]);
	return 0;
}