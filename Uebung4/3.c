#include <stdio.h>



struct Kundendaten
{
    char 	Kundennummer[8];
    char    Nachname[40];  /* Name         */
    char    Vorname[30];
    char    Strasse_nr[60];
    int     Postleitzahl;
    char    Ort[60];
    int     TelefonFestnetz;
    int     TelefonMobil;
    int     Fax;
    char    Email[80];
    char    Geburtsdatum[10];
};
typedef struct Kundendaten Kunde;
void eingabe(struct Kundendaten *p_k);
void ausgabe(struct Kundendaten *p_k);
int main()
{
    eingabe(&kunde1);
    ausgabe(&kunde1);
    return 0;
}
void eingabe(struct Kundendaten *p_k)
{
    printf("Bitte geben sie die Kundennummer ein: ");
    scanf("%s",p_k->KdNr);
    printf("Bitte geben sie den Nachnamen ein: ");
    scanf("%s",p_k->Nachname);
    printf("Bitte geben sie den Vornamen ein : ");
    scanf("%s",p_k->Vorname);
    printf("Bitte geben sie die Straße ein : ");
    printf("Bitte geben sie die Postleitzahl ein : ");
    printf("Bitte geben sie den Ort ein : ");
    printf("Bitte geben sie die Festnetz Telefonnummer ein : ");
    printf("Bitte geben sie TelefonMobil ein: ");
    printf("Bitte geben sie Fax ein: ");
    printf("Bitte geben sie die Email ein: ");
    printf("Bitte geben sie die Geburtsdatum in form von (xx.xx.xxxx)ein: ");
}
void ausgabe(struct Kundendaten *p_k)
{
    printf("Kundennummer: %s\nVorname: %s\nNachname: %s\nKontostand: %3.2f",p_k->KdNr,p_k->Vorname,p_k->Nachname,p_k->kto);
}
