

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float zahl1,zahl2;
    char operand;
    printf("Bitte Rechenausdruck eingeben in der Form Operand Operator Operand.\n");
    scanf("%f %c %f", &zahl1,&operand,&zahl2);
    printf("%f %c %f\n", zahl1,operand,zahl2);
    switch(operand){
    case '+':
        printf("%f",zahl1+zahl2);
        break;
    case '-':
        printf("%f",zahl1-zahl2);
        break;
    case '*':
        printf("%f",zahl1*zahl2);
        break;
    case '/':
        printf("%f",zahl1/zahl2);
        break;
    }

}
