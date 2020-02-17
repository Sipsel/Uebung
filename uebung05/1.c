#include <stdio.h>
int wordcount(char *string);
int main()
{
    char text[2048];
    puts("Bitte Text eingeben: ");
    fgets(text,2048,stdin);
    puts(text);
    printf("%d",wordcount(text));
    return 0;
}
int wordcount(char *string)
{
    int i=1,result=0,i_char,x;
    while(i)
    {
        //printf("%c %d",string[x],string[x]);
        if(string[x] == '\0'){
            i=0;
            break;
        }
        i_char = string[x];
        if(i_char<48 && i_char !=45) 
        {
            result++;
        }
        x++;
    }
    return result;
}
