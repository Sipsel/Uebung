#include <stdio.h>
#include <string.h>
#define leange 49

void eingabe(int n,char *arr[n]);
int main()
{
    char *names[leange];
    eingabe(leange,&names);
    return 0;
}
void eingabe(int n,char *arr[n])
{
    int lz_var = 1,i;
    char *temp;
    for(i=0;i<=leange;i++)
    {
        printf("%d.Name :",i);
        scanf("%s",&temp);
        printf("%s",temp);
        strcpy(arr[i],temp);
    }
}