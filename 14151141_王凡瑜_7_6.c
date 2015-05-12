#include<stdio.h>

void connect_str(char c1[],int l1,char c2[],int l2,char c[],int l);

void main()
{
	char c1[50],c2[50],c[100];
	printf("Please input two character arrays.\n");
	gets(c1);
	gets(c2);
	connect_str(c1,50,c2,50,c,100);
	printf("The connected character array is \n");
	printf("---------------------------------\n");
	puts(c);
	printf("\n");
}

void connect_str(char c1[],int l1,char c2[],int l2,char c[],int l)
{
	int i,j,k;
	for(i=0;i<50;i++)
	{
		if(c1[i]=='\0')
			break;
	}
	for(j=0;j<50;j++)
	{
		if(c2[j]=='\0')
			break;
	}
	for(k=0;k<i;k++)
		c[k]=c1[k];
	for(k=i;k<(i+j);k++)
		c[k]=c2[k-i];
	c[i+j]='\0';
}
