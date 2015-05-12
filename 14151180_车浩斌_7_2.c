#include<stdio.h>
#include<math.h>
void main()
{	
	double a,b,c,d,e,f;	
	printf("请依次输入二次方程的三个系数，以逗号隔开：\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);	
	d=b*b-4*a*c;
	e=-b/(2*a);
	if (a==0)
	if (b==0) 		   
	if (c==0) 
	printf("该方程存在无数解\n");		   
	else printf("该方程无解\n");		
	else printf("该方程有唯一解，为 %.10f \n",-c/b);			
	else	
	{		
		if (d==0) 
	printf("该方程有唯一解，为 %.10f \n",e);		
	else			
		if (d>0) {f=sqrt(d)/(2*a);
		printf("该方程的解为 %.10f 和 %.10f\n",e+f,e-f);}            
		else 
		{
			f=sqrt(-d)/(2*a);printf("该方程的解为 %lf+%lf i和 %lf-%lf i\n",e,f,e,f);
		}	
	}
}
