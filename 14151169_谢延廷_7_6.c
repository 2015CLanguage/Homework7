#include <stdio.h>
void c(char s1[100],char s2[100],char s[100]);
int main()
{
char s1[100],s2[100],s3[100];
printf("请输入第一个字符串：");
scanf("%s",s1);
printf("请输入第二个字符串：");
scanf("%s",s2);
c(s1,s2,s3);
printf("%s\n",s3);
return 0;


}
void c(char s1[100],char s2[100],char s[100])
{int i,j;
for (i=0;s1[i]!='\0';i++)
   s[i]=s1[i];
for (j=0;s2[j]!='\0';j++)
   s[i+j]=s2[j];
s[i+j]='\0';

}
