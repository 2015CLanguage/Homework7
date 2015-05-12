#include <stdio.h>
double p(double n,double x){
	double y;
	if(n==0){
		y=1;
	}else if(n==1){
		y=x;
	}else if(n>1){
		y=(2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x)/n;
	}
	return y;
}
int main(){
	double n,x,y;
	scanf("%lf%lf",&n,&x);
	y=p(n,x);
	printf("%-10.2f",y);
	return 0;
}
