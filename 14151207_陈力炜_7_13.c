#include<stdio.h>
int main(){
	int x,n,P;
	float p(int,int);
	printf("x=");
	scanf("%d",&x);
	printf("n=");
	scanf("%d",&n);
	P=p(n,x);
	printf("P%d(%d)=%6.2f\n",n,x,P);
	return 0;
}
float p(int n,int x){
	if (n==0){
		return (1);
	}
	else if (n==1){
		return (x);
	}
	else if (n>=1){
		return ((2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x)/n);
	}
}
