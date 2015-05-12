#include<stdio.h>
#include<math.h>
float a,b,c,disc,x1,x2,p,q;
int main(){
	void great(float,float);
	void equal(float,float);
	void small(float,float);
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	disc=b*b-4*a*c;
	printf("root:\n");
	if (disc>0){
		great(a,b);
		printf("x1=%f\tx2=%f\n",x1,x2);
	}
	if (disc==0){
		equal(a,b);
		printf("x=%f\n",x1);
	}
	if (disc<0){
		small(a,b);
		printf("x1=%f+%fi\tx2=%f-%fi\n",p,q,p,q);
	}
	return 0;
}
void great(float a,float b){
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);

}
void equal(float a,float b){
	x1=-b/(2*a);
}
void small(float a,float b){
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
}
