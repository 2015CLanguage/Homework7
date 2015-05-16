#include<stdio.h>
void c(char m[],char n[],char s[]);

int main()
{
	char m[100],n[100],s[200];
	printf("请输入第一个字符串");
	scanf("%s",m);
	printf("请输入第二个字符串");
	scanf("%s",n);
	c(m,n,s);
	printf("合并后的字符串为%s\n",s);
	
return 0;

}

void c(char m[],char n[],char s[])//字符数组实现合并
{	
	int i,j;
	for(i=0;m[i]!='\0';i++)
		s[i]=m[i];
	for(j=0;n[j]!='\0';j++)
		s[i+j]=n[j];
	s[i+j]='\0';

}
