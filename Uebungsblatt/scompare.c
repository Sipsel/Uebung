#include <stdio.h>
#include <string.h>

scompare(char *txt1,char *txt2,int case_senstiv);
int main()
{
    char txt1[] = "this is a test string";
    char txt2[] = "this is a test string";
    printf("%d",scompare(txt1,txt2,0));
}
scompare(char *txt1,char *txt2,int case_senstiv)
{
    int i;
    int to_upper = ((int)'a')-((int)'A');
    //printf("%d",to_upper);
    if(strlen(txt1)!=strlen(txt2)){return 0;}
    for(i=0;i<strlen(txt1);i++)
    {
        if(txt1[i]!=txt2[i]){return 0;}
    }
    return 1;
}
