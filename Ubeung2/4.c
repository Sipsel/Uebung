
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ggt(int a, int b);
void vorzeichen(int *a, int *b);
int main(void){
    int a,b,a_g,b_g;

    printf("Bitte geben sie Zaehler und Nenner ein in Form von Zaehler/Nenner\n");
    scanf("%d/%d",&a,&b);
    printf("%d %d\n",a,b);
    a_g=a/ggt(a,b);
    b_g=b/ggt(a,b);
    vorzeichen(&a_g,&b_g);
    printf("Der gekuerzte Bruch sieht so aus => %d / %d",a_g,b_g);

}

void vorzeichen(int *a, int *b){
    if(*b<0){
        *b=*b*(-1);
        *a=*a*(-1);
    }
}
int ggt(int a, int b)
{
    if(b<0){
        b=b*(-1);
    }
    if (a == 0)
    {
    	return b;
    }
    while(b != 0)
    {
    	if (a > b)
    	{
    		a = a - b;
    	}
        else
    	{
    		b = b - a;
    	}
    }
    return a;
}
