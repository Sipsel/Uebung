#include <stdio.h>

void eingabeMonat(int *monatp);

int main()
{
    int monat;
    printf("Bitte geben sie einen Monat an:\t");
    eingabeMonat(&monat);
    printf("%d Monat", monat);
}

void eingabeMonat(int *monatp)
{
    scanf("%d",monatp);
    if((*monatp<1) || (*monatp>12))
    {
        printf("Monate koennen nur zwischen 1 und 12 eingegeben werden\n");
        *monatp = 1;
    }
}
