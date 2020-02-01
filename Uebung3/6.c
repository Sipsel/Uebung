#include <stdio.h>
int main()
{
    int a,b,max;
    a=6;
    b=4;
    (a!=b)?printf("a ist ungleich b"):printf("a ist gleich b");
    max = (a>=b)?a:b;
    printf("\n%d",max);
    return 0;
}
