int teilt(int a, int b);
int main(void)
{
    int a=50,b=7;
    printf("%d",teilt(a,b));
}
int teilt(int a, int b)
{
    if(a%b == 0){
        return 1;
    }else{
        return 0;
    }
}
