#include <stdio.h> 
int main()
{
	char lianjie(char str1[],char str2[]);
	char str1[10],str2[10],str[20];
	int i;
	gets(str1);
	gets(str2);
	lianjie(str1,str2);
    return 0;
}

void lianjie(char str1[],char str2[])
{
	char str[20];
	int i=0,j=0;
		for(i=0;i<=19;i++){
		str[i]='\0';
	}
	for(i=0;str1[i]!='\0';i++){
		str[i]=str1[i];
	}
	for(j=0;str2[j]!='\0';j++){
		   str[i]=str2[j];
		   i=i+1;
	}
     puts(str);
}
