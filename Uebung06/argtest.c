#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i=1;i<argc;i++)
    {
        printf("%d: %s\n",i,argv[i]);
    }
    return 0;
}
