#include <stdio.h>
#include <string.h>
int main()
{
	void str_copy(char char1[],char char2[]);
	char char1[100];
	char char2[100];
	printf("输入第一个字符串:");
	gets(char1);
    printf("输入第二个字符串:");
	gets(char2);
	str_copy(char1,char2);
	return 0;
}

void str_copy(char char1[],char char2[])
{
	int i,j;
	char char3[200]={' '};
	for(i=0;i<strlen(char1);i++)
	{
		if(char1[i]!='\0')
			char3[i]=char1[i];
		else
			break;
	}
	for(j=0;j<strlen(char2);j++)
	{
		if(char2[j]!='\0')
		{char3[i+j]=char2[j];}
		else
		{
			char3[i+j]=char2[j];
			break;
		}
	}
	printf("连接后的字符串为:%s\n",char3);
}
