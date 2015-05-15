#include "stdio.h"
#include "string.h"

int main()
{
    char s[10],t[10],u[20];
    int a,b,i;
    printf("请输入两个字符串：\n字符串1=");
    gets(s);
    printf("字符串2=");
    gets(t);
    b=strlen(t);
    a=strlen(s);
    for(i=0;i<20;i++){u[i]='\0';}
    for(i=0;i<a;i++){u[i]=s[i];}
    for(i=a;i<a+b;i++){u[i]=t[i-a];}
    printf("连接后的字符串为：");
    puts(u);
    return 0;
}
