#include<stdio.h>
char string(char string1[],char string2[])
{
    int i,j;
    for(i=0;;i++){
        if(string1[i]=='\0')
            break;
    }
    for(j=0;;j++){
        string1[i+j]=string2[j];
                if(string2[j]=='\0')
            break;
    }
    return string1[100];
}
void main()
{
    char string1[100],string2[100];
    printf("请输入字符串1\n");
    gets(string1);
    printf("请输入字符串2\n");
    gets(string2);
    string(string1,string2);
    puts(string1);
}
