#include"stdio.h"
void concatenate(char s1[], char s2[], char s[]);
void main()
{
	char s1[50], s2[50], s[50];
	printf("Please input string1!\n");
	scanf("%s", s1);
	printf("Please input string2!\n");
	scanf("%s", s2);
	concatenate(s1, s2, s);
	printf("The string is %s.\n",s);
}
void concatenate(char s1[], char s2[], char s[])
{
	int i, j;
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s[i + j] = s2[j];
	s[i+j]='\0';

}
