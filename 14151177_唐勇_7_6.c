#include <stdio.h>
void fun_strcat(char str1[],char str2[])
{
 int i = 0;
 int j = 0;
 while(str1[i] != '\0')
 {
  i++;
 }
 while ((str1[i++] = str2[j++]) != '\0');
 printf("%s\n",str1);
}
int main(int argc, char* argv[])
{
 char str1[8] = "ab";
 char str2[8] = "cd";
 fun_strcat(str1,str2);
 return 0;
}
