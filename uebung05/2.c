#include <stdio.h>

int d_a(int n);
int getTag(char *datum);
int getMonat(char *datum);
int getJahr(char *datum);
char* getMonatsname(char *datum);
int main()
{
    char datum[10];
    printf("%d ",getTag("19.02.18"));
    printf("%d ",getMonat("19.02.18"));
    printf("%d",getJahr("19.02.70"));
    printf("%s",getMonatsname("19.08.19"));
    return 0;
}
int d_a(int n)  //translates ascci 1-9 to numerical 1-9
{
    return n-48;
}
int getTag(char *datum)
{
    if(!(d_a(datum[0]) ==0))
    {
        return d_a(datum[0])*10+d_a(datum[1]);
    }
    else
    {
        return d_a(datum[0]);
    }
}
int getMonat(char *datum)
{
    if(!(d_a(datum[3]) ==0))
    {
        return d_a(datum[3])*10+d_a(datum[4]);
    }
    else
    {
        return d_a(datum[4]);
    }
}
int getJahr(char *datum)
{
    int a = d_a(datum[6])*10+d_a(datum[7]);
    if(a<70)
    {
        return 2000+a;
    }
    else
    {
        return 1900+a;
    }
}
char* getMonatsname(char *datum)
{
    char *monat[12]={"Januar","Februar","Maerz","April","Mai","Juni","Juli","August","September","Oktober","November","Dezember"};
    return monat[getMonat(datum)-1];
}