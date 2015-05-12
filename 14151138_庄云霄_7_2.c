#include<stdio.h>
#include<math.h>
void two(float x,float y,float z);
void one(float x,float y,float z);
void zero(float x,float y,float z);
int main(){
	float a,b,c,d;
	d=b*b-4.0*a*c;
	printf("please input 3 nums:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("%5.2f",d);
	if(d>0){
		two(a,b,c);
	}
	else if(d==0){
		one(a,b,c);
	}
	else{
		zero(a,b,c);
	}
	return 0;
}
void two(float x,float y,float z){
	float x1,x2,d;
	d=y*y-4*x*z;
	
	x1=(0-y+sqrt(d))/(2*x);
	x2=(0-y-sqrt(d))/(2*x);
	printf("解为：\n%5.2f %5.2f ",x1,x2);
}


void one(float x,float y,float z){
	float x1,x2,d;
	d=y*y-4*x*z;
	x1=(0-y+sqrt(d))/(2*x);
	
	printf("有两个相等的解：\n%5.2f ",x1);	
}


void zero(float x,float y,float z){
	printf("没有实数解");
}
