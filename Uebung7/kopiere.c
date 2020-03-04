#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
                char ch, source_file[20], target_file[20];
                FILE *source, *target;
   
                if(argc == 1)
                {
                               printf("Quelldatei:");
                               gets(source_file);
                               source = fopen(source_file, "r");
                               
                               printf("Zieldatei:");
                               gets(target_file);
                               target = fopen(target_file, "w");
                }
                else
                {
                               source = fopen(argv[1],"r");
                               target = fopen(argv[2],"r");
                }
   
   if (source == NULL)
   {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
   if (target == NULL)
   {
      fclose(source);
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
   int ueberschreiben;
   printf("Soll die Datei ueberschrieben werden? n/y = 0/1 => ");
   scanf("&d",&ueberschreiben);
   if(ueberschreiben == 1)
   {
                               while ((ch = fgetc(source)) != EOF)
                               fputc(ch, target);
                               printf("Datei neu.txt liegt vor!\n");
   }else
   {
                   printf("Abbruch");
   }
                   
   fclose(source);
   fclose(target);
   return 0;
}
