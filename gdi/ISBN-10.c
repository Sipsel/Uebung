#include <stdio.h>
#include <string.h>

int isbn_sum(char *ziffer); // returns the sum of an isbn-code in form of a string
int get_isbn_pruefziffer(char *ziffer); // calculates the check number of an isbn-code
int verify_isbn_pruefziffer(char *ziffer); // checks if the isbn nubmer is correct(1) or not(0)
int main()
{
    printf("%c\n",get_isbn_pruefziffer("1-234-54321-?"));
    printf("%c\n",get_isbn_pruefziffer("3-540-59101"));
    printf("%d",verify_isbn_pruefziffer("3-540-59101-x"));
    return 0;
}
int isbn_sum(char *ziffer)
{
    int i, counter=10,result=0, z,arr_len;
    arr_len=strlen(ziffer);
    
    //printf("%d\n",arr_len);
    for(i=0;i<arr_len;i++)
    {
        z=ziffer[i];
        if(47 < z && z<58 || z==120)
        {
            if(z!=120)
            {
                result+=(z-48)*counter;
                counter--;
            }
            else
            {
                result+=10*counter;
                counter--;
            }
        }
    }
    return result;
}
int get_isbn_pruefziffer(char *ziffer)
{
    int sum = 11-(isbn_sum(ziffer)%11);
    if(sum == 10)
    {
        return 120;
    }
    else
    {
        return sum+48;
    }
   
}
int verify_isbn_pruefziffer(char *ziffer)
{
     int i, counter=10,result=0, z,arr_len, laetzte_ziffer=0;
    arr_len=strlen(ziffer);
    
    //printf("%d\n",arr_len);
    for(i=0;i<arr_len;i++)
    {
        z=ziffer[i];
        //printf("%d %d\n",laetzte_ziffer,z);
        if(47 < z && z<58 || z == 120)
        {
            
            if(z!=120)
            {
                result+=(z-48)*counter;
                laetzte_ziffer = z-48;
                counter--;
            }
            else
            {
                result+=10*counter;
                laetzte_ziffer=10;
                counter--;    
            }
            
        }
        
    }
    if(laetzte_ziffer == 11-((isbn_sum(ziffer)-laetzte_ziffer)%11))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}