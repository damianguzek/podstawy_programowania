
#include<stdio.h>

int main()
{

    double a;
    double b;
    double c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    double srednia=3.0/(1.0/a+1/b+1/c);
    printf("%f", srednia);
    return 0;
}
