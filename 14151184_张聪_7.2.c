#include<stdio.h>
#include<math.h>
void bigger_than_zero(float a,float b);
void equal_to_zero(float a,float b);
void smaller_than_zero(float a,float b);
float x1,x2,disc,p,q;
int main()
{
	float a,b,c;
	printf("input a,b,c\n");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("equation:%5.2f*x*x+%5.2f*x+%5.2f=0\n",a,b,c);
	disc=b*b-4*a*c;
	if(disc>0){
		bigger_than_zero(a,b);
		printf("x1=%f\t\t x2=%f\n",x1,x2);
	}
	else if(disc==0){
		equal_to_zero(a,b);
        printf("x1=%f\t\t x2=%f\n",x1,x2);
	}
	else{
		smaller_than_zero(a,b);
		printf("x1=%f+%fi\t x2=%f-%fi\n",p,q,p,q);
		}
	return 0;
}
void bigger_than_zero(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
    x1=(-b-sqrt(disc))/(2*a);
}
void equal_to_zero(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void smaller_than_zero(float a,float b)
{
	p=(-b)/(2*a);
	q=sqrt(-disc)/(2*a);
}
