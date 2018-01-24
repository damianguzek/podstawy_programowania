#include <stdio.h>
#include <math.h>

typedef struct punkt{
	int x,y,z;
}pkt;

float odleglosc(pkt a, pkt b){
	float d=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2)+pow((a.z-b.z),2));
	return d;
}
int main(){
	pkt a={1,2,3};
	pkt b={2,3,4};
	printf("%f",odleglosc(a,b));
	return 0;
}
