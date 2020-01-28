#include <stdio.h>
#include <stdlib.h>


int main(void){
    int i;
    printf("Welche Zahl soll ich umrechnen? -> ");
    scanf("%d", &i);
    printf("Oktal: %o\nHexdezimal: %x\n",i,i);
    printf("%d\n",i);
    while(0 < i)
   {
        printf("%d", i%2);
        i=i/2;
   }

}

