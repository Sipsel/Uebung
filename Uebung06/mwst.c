#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	int i;
	printf("nargc=%d (Anzahl Parameter: %d)\n", argc, argc - 1);
	for (i = 0; i < argc; i++)
	{
		printf("%d. Argument: [%s]\n", i, argv[i]);
	}
	//system("pause");
	if (argc > 2 || argc < 2)
		printf("\nUnzulaessige Parameterzahl! mwst.exe -? fuer Hilfe.\n");
	else if (strcmp(argv[1], "-?" != 1))
		printf("\nAufruf: mwst [betrag] \nAktion: Dieses Programm addiert die Mehrwertsteuer in Hoehe von 19 Prozent.\n");
	else if (atof(argv[1]))
		printf("\nDer Betrag inkl. Mehrwertsteuer betraegt: %.2f\n", (atof(argv[1]) * 1.19));
}
