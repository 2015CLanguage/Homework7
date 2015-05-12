#include <stdio.h>
#include <math.h>
#include <string.h>

char st1[100],st2[100],st3[200];


void  combine(char st1[],char st2[],char st3[])
{
	int i;
	int l1=strlen(st1);
	int l2=strlen(st2);
	for (i=0; i<l1; i++)  st3[i]=st1[i];
	for (i=l1; i<l1+l2; i++)  st3[i]=st2[i-l1];

}

int main()
{
	gets(st1);
	gets(st2);
	combine(st1,st2,st3);
	printf("%s\n",st3);
	return 0;
}
