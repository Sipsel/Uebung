#include <stdio.h>
#define partei 9
#define mandate_anzahl 7

int max(int a,int b);
void mandate(int parteien_anz,int parteien[parteien_anz], int mandate_anz);
int main()
{
    int parteien[partei] = {1000,700,400,300,500,600,997,504,2015};
    mandate(partei,parteien,mandate_anzahl);
    return 0;
}
int max(int a,int b)
{
    return a > b ? a : b;
}
void mandate(int parteien_anz,int parteien[parteien_anz],int mandate_anz)
{
    int teiler[parteien_anz],i,x,res;
    for(i=0;i<parteien_anz;i++)
    {
        teiler[i]=2;
    }
    /*
    for(i=0;i<parteien_anz;i++)
    {
        printf("%d %d\n", parteien[i],teiler[i]);
    }*/
    res = max(max(parteien[0],parteien[1]),max(parteien[2],parteien[3]));
    for(i=0;i<mandate_anz;i++)
    {
        //printf("%d\n",res);
        for(x=0;x<partei;x++)
        {
            
            if(res == parteien[x])
            {
                printf("%d Partei bekommt das %d Mandat\n",x+1,i+1);
                parteien[x] = parteien[x]/teiler[x];
                teiler[x]+=1;
                break;
            }
        }
        
        res = max(max(parteien[0],parteien[1]),max(parteien[2],parteien[3]));
    }
    
  
    
    
}