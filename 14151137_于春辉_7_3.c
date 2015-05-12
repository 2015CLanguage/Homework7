#include<stdio.h>
#include<math.h>
int main()
{
	void sushu(int a);
	int a;
	printf("输入一个整数:");
	scanf("%d",&a);
	sushu(a);
return 0;}

void sushu(int a)
{
	int i,b=0;
	if(a==2||a==3){
	 printf("这个数是素数");}
	if(a==4){
		printf("这个数不是素数");
	} 
	for(i=2;i<sqrt(a);i++){
		if(a%i==0){
			b=0;
			printf("这个数不是素数");
			break;
		}
		b=1;
	}
	if(b=1){
		printf("这个数是素数");
	}
}
