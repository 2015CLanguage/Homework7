#include<stdio.h>
void C(char a[],char b[],char c[]);
int main()
{
	char a[50],b[50],c[100];
	printf("请输入一个字符串");
	scanf("%s",&a);
	printf("请输入另一个个字符串");
	scanf("%s",b);
	C(a,b,c);
	return 0;
}
void C(char a[],char b[],char c[])
{
	int i,j;
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j]=b[j];
	c[i+j]='\0';
	printf("合并后的字符串是%s\n",c);
}
