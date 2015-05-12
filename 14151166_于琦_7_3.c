#include<stdio.h>
int prime(int n)
{
    int i,p,q=0;
    for(i=2;i<n/2;i++){
        p=n%i;
        if(p==0){
            q=1;
            break;}
    }
    return q;
}
int main()
{
    int n,q;
    printf("请输入一个整数n\n");
    scanf("%d",&n);
    q=prime(n);
    if(q==1)
        printf("%d不是素数",n);
    else
        printf("%d是素数",n);
    return 0;
}
