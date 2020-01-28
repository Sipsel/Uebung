 #include <stdio.h>
 #include <math.h>
 #define Kurs 1.0712
 int main(void)
 {
    float input_zahl;
    int input_waehrung;
    printf("Bitte geben sie an ob sie Euro in Franken[0] oder Franken in Euro[1] -> ");
    scanf("%c",&input_waehrung);
    printf("Bitte geben sie den Umrechnungsbetrag ein --> ");
    scanf("%f",&input_zahl);

    if(input_waehrung){
        printf("Das sind %3.4f Franken",input_zahl/Kurs);
    }
    else if(input_waehrung){
        printf("Das sind %3.4f Euro",input_zahl*Kurs);
    }
    else{
        printf("Eerr0r please reboot");
    }
 }

