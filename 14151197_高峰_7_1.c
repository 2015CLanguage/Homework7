
#include <stdio.h>
int max(int a,int b){
	int x;
	if(a<b){
		x=a;
		a=b;
		b=x;
	}
	while((x=a%b)!=0){
		a=b;
		x=a;
	}
	x=b;
	return x;
}

int min(int a, int b, int x){
	int y;
	y=a*b/x;
	return y;
}

int main(){
	int a,b,x,y;
	scanf("%d%d",&a,&b);
	x=max(a,b);
	y=min(a,b,x);
	printf("最大公约数为%d，最小公倍数是%d",x,y);
	return 0;
} 
