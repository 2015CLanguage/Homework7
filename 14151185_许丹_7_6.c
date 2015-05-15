#include<stdio.h>
void connect(char str1[],char str2[],char str3[]);

int main()
{
    char str1[100],str2[100],str3[100];
    printf("Please input string 1:");
    scanf("%s",str1);
    printf("Please input string 2:");
    scanf("%s",str2);
    connect(str1,str2,str3);
    printf("\nThe connected string is:%s\n",str3);
    return 0;
}

void connect(char str1[],char str2[],char str3[])
{
    int i,j;
    for(i=0;str1[i]!='\0';i++)
        {str3[i]=str1[i];}
    for(j=0;str2[j]!='\0';j++)
        {str3[i+j]=str2[j];}
    str3[i+j]='\0';
}
