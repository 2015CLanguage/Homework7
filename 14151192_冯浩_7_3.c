#include<stdio.h>
#include<math.h>
int panduans(int);
int main()
{
	int a,b;
	printf("请输入一个正整数n：\n");
	scanf("%d",&a);
	b=panduans(a);
	if(b==0)
		printf("%d是素数。\n",a);
	else
		printf("%d不是素数。\n",a);
	return 0;
}
int panduans(int a)
{	
	int i,s,t,m;
	s=sqrt(a);
	for(i=2;i<=s;i++)
		{m=a%i;
		 if(m==0)
			{t=1;
			 break;
			}
		 else
			 t=0;
		}
	return t;
}
