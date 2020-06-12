#include <stdio.h>


int merge(int arr1_length,int arr2_length,int arrg_length,int *arr1,int *arr2,int *arr_g);
int main()
{
    int a[5] = {7,13,24,49,55};
    int b[7] = {2,12,16,29,33,46,54};
    int ab_goal[12];
    merge(5,7,12,a,b,ab_goal);
    return 0;
}
int merge(int arr1_length,int arr2_length,int arrg_length,int *arr1,int *arr2,int *arr_g)
{
    int counter_a = 0;
    int counter_b = 0;
    int i,lowest_value;
    int lowest_list_value;
    i=0;
    int x;
    while(i<arrg_length)
    {
        lowest_value = 99999;
        for(x=0+counter_a;x<arr1_length;x++)
        {
            if(arr1[x] < lowest_value)
            {
               lowest_value = arr1[x];
               lowest_list_value = 1;
            }
        }
        for(x=0+counter_b;x<arr2_length;x++)
        {
            if(arr2[x]<lowest_value){
                lowest_value = arr2[x];
                lowest_list_value = 2;
            }
        }
        printf("%d\n",lowest_value);
        arr_g[i] = lowest_value;
        
        if(lowest_list_value == 1)
        {
            counter_a++;
        }
        else
        {
            counter_b++;
        }
        i++;
        
    }
}
  
    
    
