#include<stdio.h>
int main()
{void C(char str1[],char str2[],char str[]);
char s1[100],s2[100],s[100];
printf("input str1:");
scanf("%s",s1);
printf("input str2:");
scanf("%s",s2);
C(s1,s2,s);
printf("\n 连接后的字符串是： %s\n",s);
return 0;
}
void C(char str1[],char str2[],char str[])
{int i,j;
for (i=0;str1[i]!='\0';i++)
	 str[i]=str1[i];
for (j=0;str2[j]!='\0';j++)
	 str[i+j]=str2[j];
str[i+j]='\0';
}
