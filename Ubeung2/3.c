#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float zahl1,zahl2;
    char operand;
    int l_var = 1;
    printf("Gueltige Operatoren sind + - * /   und  # fuer das Potenzieren.\nBitte Rechenausdruck eingeben (Operand Operator Operand):\n");
    do{
        printf("=> ");
        scanf("%f %c %f", &zahl1,&operand,&zahl2);
        printf("%f %c %f\n", zahl1,operand,zahl2);
        switch(operand){
        case '+':
            printf("%f\n",zahl1+zahl2);
            break;
        case '-':
            printf("%f\n",zahl1-zahl2);
            break;
        case '*':
            printf("%f\n",zahl1*zahl2);
            break;
        case '/':
            if(zahl2==0){
                printf("*** Fehler: Durch null teilen ist nicht gut!\n");
            }
            printf("%f\n",zahl1/zahl2);
            break;
        case '#':
            if(zahl1 <0 ){
                printf("*** Fehler: negative Basen sind hier nicht erlaubt!\n");
                break;
            }
            printf("%f\n",pow(zahl1,zahl2));
            break;
        }
        printf("Weiter?(0/1)");
        scanf("%d",&l_var);
    }while(l_var);
}
