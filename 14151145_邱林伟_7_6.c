#include<stdio.h>
void main()
{
	void connect(char string1[],char string2[],char string[]);
	char string1[100],string2[100],string[200];
    printf("请输入第一串字符串:");
	scanf("%s",string1);
	printf("请输入第二串字符串:");
    scanf("%s",string2);
	printf("连接的字符串为:\n%s\n",string);
    connect(string1,string2,string);
	printf("\n");
}

void connect(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
	string[i]=string1[i];
	for(j=0;string2[j]!='\0';j++)
	string[i+j]=string2[j];
	string[i+j]='\0';
}
