# include<stdio.h>
void f1(char string1[],char string2[],char string[]);

void f1(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
		string[i]=string1[i];
	for(j=0;string2[j]!='\0';j++)
		string[i+j]=string2[j];
	string[i+j]='\0';
}

int main(void)
{
	char s1[100],s2[100],s[200];
	printf("请输入第一个字符串：\n");
	scanf("%s",s1);
	printf("请输入第二个字符串：\n");
	scanf("%s",s2);
	f1(s1,s2,s);
	printf("连接后的字符串为：%s\n",s);

	return 0;
}


