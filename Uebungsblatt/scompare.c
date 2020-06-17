#include <stdio.h>
#include <string.h>

int scompare(char *txt1,char *txt2,int case_senstiv);
int main()
{
    char txt1[] = "this is a dest string";
    char txt2[] = "this is a test string";
    printf("%d",scompare(txt1,txt2,1));
}
int scompare(char *txt1,char *txt2,int case_senstiv)
{
    int x;
    int to_upper = ((int)'a')-((int)'A');
    if(strlen(txt1)!=strlen(txt2)){return 0;}
    x = strcmp(txt2,txt1);
    if(case_senstiv)
    {
        if(x ==32){return 1;};
    }
    return !x;
}
