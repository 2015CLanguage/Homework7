#include<stdio.h>
int panduan(int x);
int main(){
	int n;
	printf("请输入一个数字：\n");
	scanf("%d",&n);
	panduan(n); 
	return 0;
} 


int panduan(int x){
	int i,j;
	j=0;
	for(i=1;i<=x/2;i++){
		if((x%i) !=0){
			j++;
		}	
	}
	if(j==0){
		printf("该数是素数");
	}
	else{
		printf("不是素数");
	}
	return 0; 
}
