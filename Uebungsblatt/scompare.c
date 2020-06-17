#include <stdio.h>
#include <string.h>

int scompare(char *txt1,char *txt2,int case_senstiv);
int main()
{
    char txt1[] = "this is a Test string";
    char txt2[] = "this is a test string";
    printf("%d\n",scompare(txt1,txt2,1));
}
int scompare(char *txt1,char *txt2,int case_senstiv)
{
    if(strlen(txt1)!=strlen(txt2)){return 0;}
    int x = strcmp(txt2,txt1); // either 1 for diffrent string, 0 for same string or 32/-32 for higher or lower letter
    if(case_senstiv)
    {
        //check if ascii is upper or lower case 
        return ((x==32) || (x==-32)) ? 1:0; 
    }
    
    return (x == 0) ? 1 : 0;
}
