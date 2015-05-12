#include <stdio.h>
#include <math.h>
void dayu(double a,double b,double c){
	double d,e,x1,x2;
	d=sqrt(b*b-4*a*c);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
		printf("方程有两个不同实根，分别为%lf,%lf。",x1,x2);
}

void dengyu(double a,double b,double c){
	double x;
	x=(-b)/(2*a);
    	printf("方程有两个相等实根，为%lf",x);
}

void xiaoyu(){
    printf("方程无实数根。");
}

int main(){
    void dayu(double a,double b,double c);
    void dengyu(double a,double b,double c);
    void xiaoyu();
	double a,b,c,d,x1,x2,x;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		dayu(a,b,c);
	
	}
	if(d==0){
		dengyu(a,b,c);
	
	}
	if(d<0){
		xiaoyu();
	
	}
	return 0;
} 
