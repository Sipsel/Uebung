int summe(int n);
int summe2(int n);
int Maximum(int a, int b);
int Minimum(int a, int b);
int MaxOfArray(int arr[],int arr_length);
int Quersumme(int a);
int main()
{
    printf("%d\n", summe(5));
    printf("%d\n", summe2(6));
    printf("%d\n", Maximum(6,3));
    printf("%d",Quersumme(478));
}
int summe(int n)
{
    return (n*(n+1))/2;
}
int summe2(int n)
{
    n=n/2;
    return n*(n+1)+1;
}
int Maximum(int a, int b)
{
    if(a<b){
        return b;
    }else if(a>b){
        return a;
    }else{
        return b;
    }
}
int Minimum(int a, int b)
{
    if(a>b){
        return b;
    }else if(a<b){
        return a;
    }else{
        return b;
    }
}
int MaxOfArray(int arr[],int arr_length){
    int arr_max= 0,i;
    for(i=0;i<arr_length;i++){
        if(arr[i]>arr_max){
                arr_max = arr[i];
        }
    }
    return arr_max;
}
int Quersumme(int a)
{
 if(a<0){
    return -1;
 }
 if(a==0)
 {
     return 0;
 }
    return a%10+(Quersumme((a-a%10)/10));
}
