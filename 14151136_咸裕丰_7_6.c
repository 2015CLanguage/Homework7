# include <stdio.h>
void lianjie(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
		string[i]=string1[i];
   for(j=0;string2[j]!='\0';j++)
		string[i+j]=string2[j];
	string[i+j]='\0';
}
int main()
{
	char s1[100],s2[100],s[200];
	printf("请输入一串字符串:\n");
	gets(s1);
	printf("请输入另一串字符串:\n");
	gets(s2);
	lianjie(s1,s2,s);
	printf("连接后字符串为:\n");
	puts(s);
	return 0;
}
