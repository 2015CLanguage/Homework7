# Homework7

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int prime(int k);
    int k;
    printf("please input k !");
    scanf("%d",&k);
    prime(k);
    return 0;
}
int prime(int k){
    int i=1,flag=0;
    for(i=1;i<=k;i++){
        if(k%i==0)
            flag=flag+1;
        if(flag==2)
            break;
    }
    if(i!=1&&i!=k)
        printf("number '%d' is not a prime !\n",k);
    else
        printf("number '%d' is a prime !\n",k);
    return k;
}
