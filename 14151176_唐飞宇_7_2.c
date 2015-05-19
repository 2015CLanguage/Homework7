#include<stdio.h>
#include<math.h>
float a,b,c,p,q,r;
void great(float a,float b)
{
	p=(-b+r)/(2*a);
	q=(-b-r)/(2*a);
}
void small(float a,float b)
{
    p=-b/(2*a);
    q=r/(2*a);
}
void equal(float a,float b)
{
    p=(-b)/(2*a);
}
int main()
{
    printf("请输入a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	r=b*b-4*a*c;
	if(r>0)
		{r=sqrt(r);
         great(a,b);
		 printf("方程有两个不等实根%f   %f\n",p,q);
		}
	else if(r==0){
        equal(a,b);
        printf("方程有两个相等实根%f\n",p);
        }
    else if(r<0){
        r=sqrt(-r);
        small(a,b);
        printf("方程有两个虚根%f+%fi;     %f-%fi\n",p,q,p,q);
        }
	return 0;

}
