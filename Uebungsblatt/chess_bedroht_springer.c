#include <stdio.h>

typedef struct {
  int x, y;
} koordinate;
int bedroht(koordinate k1,koordinate k2);
int main()
{
    koordinate k1,k2;
    k1.x = 2;
    k1.y = 5;
    k2.x = 4;
    k2.y = 7;
    printf("%d",bedroht(k1,k2));

    return 0;
}
int bedroht(koordinate k1,koordinate k2)
{
    int x,y;
    x = k2.x-k1.x;
    y = k2.y-k1.y;
    if((x == y) ||(x == (y*(-1))))
    {
        return 1;    
    }
    return 0; 
}
