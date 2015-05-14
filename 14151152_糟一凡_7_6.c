#include<stdio.h>
#include<string.h>
char connection[30];
void connect(char array1[], char array2[])
{
	int i,j;
	for(i=0;array1[i]!='\0';i++)
	{
		connection[i]=array1[i];
	}
	for(j=0;array2[j]!='\0';j++)
	{
		connection[i+j]=array2[j];
	}
	connection[i+j]='\0';
}
int main()
{
	char str1[10],str2[10];
	printf("str1:");
	gets(str1);
	printf("str2:");
    gets(str2);
	connect(str1,str2);
	printf("connection:");
	puts(connection);
	return 0;
}
