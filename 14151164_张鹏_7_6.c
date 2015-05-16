#include<stdio.h>
void link(char a[50],char b[50],char c[100])
{
	int i,j;
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		c[i+j]=b[j];
		c[i+j]='\0';

}
int main()
{
	char a[50],b[50],c[100];
	printf("输入字符串");
	scanf("%s",a);
	printf("输入字符串");
	scanf("%s",b);
	link(a,b,c);
	printf("合并后为%s\n",c);

return 0;

}

