#include<stdio.h>
void lianjie(char string1[],char string2[],char string[]);
int main()
{
	char s1[100],s2[100],s[100];
	printf("请输入第一个字符串：");
	scanf("%s",s1);
	printf("请输入第二个字符串：");
	scanf("%s",s2);
	lianjie(s1,s2,s);
	printf("\n新字符串是：%s\n",s);
	return 0;
}

void lianjie(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string[i]!='\0';i++){
		string[i]=string1[i];
	}
	for(j=0;string[j]!='\0';j++){
		string[i+j]=string2[j];
	}
	string[i+j]='\0';
}
