#include <stdio.h>
int istPrimzahl(int n);
void listePrimzahlzwillinge(int a, int b);
void primfaktorzerlegung(int n);
int main()
{
    //printf("%d",istPrimzahl(993));
    listePrimzahlzwillinge(2,20);
    primfaktorzerlegung(999);
    return 0;
}
int istPrimzahl(int n)
{
    int i;
    if(n<=0){return -1;}
    if(n==2){return 1;}
    if(n%2==0){return 0;}
    for(i=3;i<=n/2;i+=2)
    {
        //printf("%d | %d\n", n,i); debug zeile
        if(n%i==0){return 0;}
    }
    return 1;
}
void listePrimzahlzwillinge(int a, int b)
{
    // Spezialfälle
    if(a>=b){printf("Keine Zwillinge gefunden\n");}                       //intervall von0
    if(b-a<=1){printf("Keine Zwillinge gefunden. Der intervall ist zu klein\n");}                      //Abstand zw. a und b zu klein um ein Primzahlzwilling zu sein 
    
    int i;
    
    
    for(i=a;i<=b-2;i++)
    {
        if(istPrimzahl(i))
        {
            if(istPrimzahl(i+2))
            {
                printf("(%d,%d) ist ein Zwilling\n", i,i+2);
            }
        }
    }
}
void primfaktorzerlegung(int n)
{
    if(n<0){printf("Fehler Zahl ist nicht natürlich");}
    if(n<=2){printf("%d",n);}
    int i;
    printf("Primfaktorzerlegung fuer %d: ",n);
    while(!(istPrimzahl(n)))
    {
        for(i=3;i<=(n/2)+1;i+=2)
        {
            //printf("%d | %d\n",n,i);
            if(n%i==0)
            {
                printf("%d ",i);
                n=n/i;
                i=0;
            }
        }
    }
    printf("%d",n);
    
}
