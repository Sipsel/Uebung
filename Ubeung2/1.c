 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
     int i=0;
    printf("x sin(x) sqrt(x)\n");
    do{
        printf("%3.2f %3.2f %3.2f\n", i*1.0/100,sin(i*1.0/100),sqrt(i*1.0/100));
        i+=5;
    }while(i<=100);
 }
