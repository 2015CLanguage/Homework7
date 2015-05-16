Enter file contents here# include<stdio.h> 
# include<math.h> 
void  f1(double a,double b,double c); 
void  f2(double a,double b,double c); 
void  f3(); 
double delta,a,b,c,x1,x2; 
void f1(double a,double b,double c) 
{ 
  double x1,x2; 
  x1=(-b+sqrt(delta))/2*a; 
  x2=(-b-sqrt(delta))/2*a; 
  printf("方程的两个实根为：%lf,%lf\n",x1,x2); 
} 
  void  f2(double a,double b,double c) 
{ 
double x1; 
x1=(-b+sqrt(delta))/2*a; 
	printf("方程有两个相等实根其值为：%5.3lf\n",x1); 
} 
void  f3() 
{ 
printf("方程无实根\n"); 
} 
int main(void) 
{ 
printf("请输入方程a*x^2+b*x+c=0的三个系数a,b,c:\n"); 
scanf("%lf%lf%lf",&a,&b,&c); 
delta=b*b-4*a*c; 
	if(delta>0) 
	f1(a,b,c); 
	else if(delta==0) 
		f2(a,b,c); 
	else 
	f3(); 
return 0; 
} 
