# Homework7

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void connectance(char s1[],char s2[],char s3[]);
    char s1[50],s2[50],s3[100];
    printf("input s1 !");
    scanf("%s",s1);
    printf("input s2 !");
    scanf("%s",s2);
    connectance(s1,s2,s3);
    printf("the result is :%s\n",s3);
    return 0;
}
void connectance(char s1[],char s2[],char s3[])
{
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        s3[i]=s1[i];
    for(j=0;s2[j]!='\0';j++)
        s3[j+i]=s2[j];
    s3[j+i]='\0';
}

