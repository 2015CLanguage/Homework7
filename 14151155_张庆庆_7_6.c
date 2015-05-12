#include<stdio.h>
#include<string.h>
char letter(char a,char b);
char a[100];
char b[100];
int main()
{
    printf("请输入两个字符串：\n");
    scanf("%s%s",a,b);
    char com(char a,char b);
    printf("两个字符串连接后是：%s\n",strcat(a,b));
    return 0;
}
char letter(char a,char b)
{
    strcat(a,b);
    return strcat( a,b) ;
}
