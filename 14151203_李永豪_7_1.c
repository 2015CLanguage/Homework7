# Homework7
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int maxdivisor(int x,int y);
    int minmultiple(int x,int y);
    int x,y,a,b;
    printf("please input x,y !");
    scanf("%d,%d",&x,&y);
    if(x==0||y==0){
        a=0;
        b=0;
    }
    else
        a=maxdivisor(x,y);
        b=minmultiple(x,y);
    printf("the greastest common divisor of '%d' and '%d' is :'%d'\n",x,y,a);
    printf("the lowest common multiple of '%d' and '%d' is :'%d'\n",x,y,b);
    return 0;
}
int maxdivisor(int x,int y)
{
    int i;
    if(x<y)
        i=x;
    else
        i=y;
    while(x%i!=0||y%i!=0){
        i=i-1;
    }
    return i;
}

int minmultiple(int x,int y){
    int i;
    if(x<y)
        i=y;
    else
        i=x;
    while(i%x!=0||i%y!=0){
        i=i+1;
    }
    return i;
}
