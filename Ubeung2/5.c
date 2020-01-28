#include <stdio.h>
#include <stdlib.h>

int toupper(char c);
int main(void){
    char c;
    scanf("%c",&c);
    printf("%c",toupper(c));
}
int toupper(char c){
    if((c>=97) && (c<=122)){
      return c-32;
    }else if(c == -124){
        return -114;
    }
    else if(c == -108){
        return -103;
    }
    else if(c == -127){
        return -102;
    }


}

