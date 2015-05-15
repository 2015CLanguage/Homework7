Enter file contents here
#include<stdio.h>

void connect(char string1[],char string2[],char string[])
{
  int i,j;
  for(i=0;string1[i]!='\0';i++)
     string[i]=string1[i];
  for(j=0;string2[j]!='\0';j++)
     string[i+j]=string2[j];
  string[i+j]='\0';
}
int main()
{
  void connect(char string1[],char string2[],char string[]);
  char string1[100],string2[100],string[100];
  printf("input string1:");
  scanf("%s",string1);
  printf("input string2:");
  scanf("%s",string2);
  connect(string1,string2,string);
  printf("the new string is %s\n",string);
  return 0;




}
