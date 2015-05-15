#include<stdio.h>
void prime(int x);

int main()
{
    int x;
    printf("Please enter the integer you want to check:");
    scanf("%d",&x);
    prime(x);
    return 0;
}

void prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("%d is a prime.",x);
    else printf("%d is not a prime.",x);
}
