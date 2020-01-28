int main(){
    int i,hex=0;
    printf("Wird hexadezimale Darstellung gewuenscht? (0/1)");
    scanf("%d",&hex);
    if(hex==0){
        for(i=0;i<255;i++){
                char c = i;
            if(isprint(c)){
                printf("%04d %c",c,i);
            }else
            {
                 printf("%04d %c",i,i);
            }
            if(i==10 || i==11 || i==9 || i==13
               ){printf("%04d I",i,i);}
            if(i%11==0)
            {
                printf("\n");
            }else{
                printf("\t");
            }
        }
    }else{
    }










    return 1;
}
