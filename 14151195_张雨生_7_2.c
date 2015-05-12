#include<stdio.h>
#include<math.h>
int main()
{
	void btz(float,float,float);
	void etz(float,float);
	void stz(float,float);
	float a,b,c,disc,x1,x2;
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0){
		btz(a,b,c);
	}
	 else if(disc==0){
		 etz(a,b);
	}
	 else{
		 stz(a,b);
	}
return 0;}

void btz(float a,float b,float c)
{
	float x1,x2,disc;
	disc=b*b-4*a*c;
	x1=(sqrt(disc)-b)/(2*a);
	x2=(-sqrt(disc)-b)/(2*a);
	printf("x1=%f,x2=%f",x1,x2);
}

void etz(float a,float b)
{
	float m,x1,x2;
	m=-2*a/b;
	printf("x1=x2=%f",m);
}

void stz(float a,float b)
{
	printf("方程无实根"); 
}
