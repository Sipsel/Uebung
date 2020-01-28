
#include <stdio.h>
 #include <stdlib.h>

int main(void){
    char c;
    int i;
    float f;
    double d;
    printf("chargroesse:%d bytes\nintgroesse:%d bytes\nfloatgroesse:%d bytes\ndoublegroesse:%d bytes\n",sizeof(c),sizeof(i),sizeof(f),sizeof(d));
}
