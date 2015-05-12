#include<stdio.h>
void lianjie(char s1[],char s2[],char s3[]);
int main(){
	
	char a1[100],a2[200],a3[300];
	printf("请输入第一个字符串:\n");
	
	scanf("%s",a1);
	printf("请输入第二个字符串:\n"); 
	scanf("%s",a2);
	lianjie(a1,a2,a3);
	return 0;
}

void lianjie(char s1[],char s2[],char s3[]){
	int i,j;
	for(i=0;s1[i]!='\0';i++){
		s3[i]=s1[i];
	}
	//printf("%d",i); 
	for(j=0;s2[j]!=0;j++){
		s3[i+j]=s2[j];
	}
	s3[i+j]='\0';
	printf("\n新字符串是:\n%s",s3);
}
