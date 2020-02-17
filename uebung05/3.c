#include <stdio.h>
#include <string.h>
#include <math.h>


int d_a(int n);
int value(char *string);
int main()
{
    printf("%d",value("12364581"));
    return 0;
}
int d_a(int n)  //translates ascci 1-9 to numerical 1-9
{
    return n-48;
}
int value(char *string)
{
    int i=0,result=0;
    for(i=strlen(string)-1;i>=0;i--)
    {
        if((string[i]<48) || (string[i]>59))
        {
            return 0;
        }
        else
        {
            result+=d_a(string[i])*pow(10,strlen(string)-i-1);
        }
        
    }
    return result;
}
