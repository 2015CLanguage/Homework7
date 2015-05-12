#include<stdio.h>
#include<math.h>
char panduan(int x);
int main()
{
	int a;
	printf("请输入一个整数:\n");
	scanf("%d",&a);
	panduan(a);
	return 0;
}

char panduan(int x)
{
	int i,m=0;
	if(x==2){
		printf("这个数是质数");
	}
	else{
	for(i=2;i<=(x-1);i++){
		if(x%i==0){
			m=1;
		}
	}
	if(m==1){
		printf("这个数不是质数");}
	else 
		printf("这个数是质数");
	}
	return '\0';
}
