#include<stdio.h>
int main(){
	void link(char s1[],char s2[]);
	char s1[100],s2[100];
	printf ("s1:");
	scanf ("%s",&s1);
	printf ("s2:");
	scanf ("%s",&s2);
	link(s1,s2);
	return 0;
}
void link(char s1[],char s2[]){
    char s3[100];
	int i,j;
	for (i=0;s1[i]!='\0';i++){
		s3[i]=s1[i];
	}
	for (j=0;s2[j]!='\0';j++){
		s3[i+j]=s2[j];
	}
	s3[i+j]='\0';
	printf("new s1:%s\n",s3);
}
