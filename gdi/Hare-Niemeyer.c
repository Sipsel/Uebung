#include <stdio.h>
#define partei 4
#define mandate_anzahl 7

int max(int a,int b);
int arr_sum(int arr_len, int arr[arr_len]);
void mandate(int parteien_anz,int parteien[parteien_anz], int mandate_anz);
void r_madate(int parteien_anz,int parteien[parteien_anz],int mandate_anz, int r_mandate,int p_summe);
int main()
{
    int parteien[partei] = {1000,700,400,300};
    mandate(partei,parteien,mandate_anzahl);
    return 0;
}
int max(int a,int b)
{
    return a > b ? a : b;
}
int arr_sum(int arr_len, int arr[arr_len])
{
    int res=0,i;
    for(i=0;i<arr_len;i++)
    {
        res+=arr[i];
    }  
    return res;
}
void mandate(int parteien_anz,int parteien[parteien_anz],int mandate_anz)
{
    int p_summe,i,x,p_mand,akt_mand=mandate_anz,res;
    p_summe= arr_sum(parteien_anz,parteien);
    for(i=0;i<parteien_anz;i++)
    {
        p_mand = parteien[i]*mandate_anz / p_summe;
        akt_mand-=p_mand;
        printf("Partei %d bekommt %d Mandate\n",i+1,p_mand);
    }
    for(i=0;i<parteien_anz;i++)
    {
        parteien[i] = parteien[i]*mandate_anz % p_summe;
    }
    for(i=0;i<akt_mand;i++)
    {
        res = max(max(parteien[0],parteien[1]),max(parteien[2],parteien[3]));
        for(x=0;x<partei;x++)
        {
            if(res == parteien[x])
            {
                printf("Partei %d bekommt %d Mandate\n",x+1,p_mand+1+i);
                parteien[x] = 0;
                break;
            }
        }
    }
    
    
}