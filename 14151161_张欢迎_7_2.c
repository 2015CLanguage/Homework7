void me(double,double); 
 void low(); 
 
 
 int main()//主函数接受输入，计算判别式 
 { 
 	double a,b,c,d; 
 	printf("请依次输入方程的系数\n"); 
 	scanf("%lf %lf %lf",&a,&b,&c); 
 	d=b*b-4*a*c; 
 	 
 	if(d>0) 
	{ 
 		up(a,b,d); 
 	} 
 	else if(d==0) 
 	{	 
		me(a,b); 
	} 
 	else 
 	{ 
 		low(); 
	} 
	 
 	return 0; 
 } 
 
void up(double a,double b,double d)//定义各分支函数 
{ 
 	double x1,x2; 
 	x1=(-b-pow(d,0.5))/(2*a); 
 	x2=(-b+pow(d,0.5))/(2*a); 
 	printf("方程的两个根为%lf\t\t%lf\n",x1,x2); 
 
 
} 
 
 
 void me(double a,double b) 
 {  
 	double x; 
 	x=(-b)/(2*a); 
 	printf("方程的根为%lf\n",x); 
 } 
 
 
void low() 
 { 
 	printf("方程无解\n"); 
 } 
