#include<stdio.h>
int main()
{
	char connection(char string1[],char string2[],char string[]);
	char s1[100],s2[100],s[200];
	scanf("%s",&s1);
	scanf("%s",&s2);
	connection(s1,s2,s);
	printf("the new string is %s",s);
}

char connection(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
	  string[i]=string1[i];
	for(j=0;string2[j]!='\0';j++)
	  string[i+j]=string2[j];
}
