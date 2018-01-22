#include <stdio.h>
#include <stdbool.h>
float funkcja(float a,float b,float c){
	if(pow(a,2)==pow(c,2)+pow(b,2)) return true;
	if(pow(b,2)==pow(a,2)+pow(c,2)) return true;
	if(pow(c,2)==pow(b,2)+pow(a,2)) return true;
	else return false;
}
 

int main() {
	printf(funkcja(5.0,4.0,3.0)?"tak":"nie");
	return 0;
}
