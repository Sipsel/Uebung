#include <stdio.h>
#include <string.h>
int pruefeKennung(char *str);
int main(int argc, char const *argv[])
{
    printf("%d \n",pruefeKennung("OK1000"));    /* Ausgabe 1 */
    printf("%d",pruefeKennung("WRONG22"));   /* Ausgabe 0 */
}
int pruefeKennung(char *str)
{
    if(strlen(str)>6)
    {
        return 0;
    }
    int chars=0,integers=0,i,i_c;
    for(i=0;i<strlen(str);i++)
    {
        i_c = str[i];   
        if ((i_c>47)&&(i_c<58)) // if char is an integer
        {
            integers++;
        }
        else if(
            (i_c>64)&&(i_c<91)
        )
        {
            chars++;
        }else
        {
            return 0;
        }
    }
    
    if(
        (
            (chars==2)||(chars==3)
        )&&
        (
            (integers==3)||(integers==4)
        )
    ){
        return 1;
    }
    else
    {
        return 0;
    }
    
}