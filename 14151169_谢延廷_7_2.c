int main()
{
int a,b,c;
double x1,x2;	
printf("请输入整数a，b，c，中间用逗号隔开");
scanf("%d,%d,%d",&a,&b,&c);
if (b*b-4*a*c>0){
	x1=x11(a,b,c);
	x2=x22(a,b,c);
	printf("x1=%d,x2=%d",x1,x2);
}
else if(b*b-4*a*c==0)
{
	x1=x1x2(a,b,c);
    printf("x1=x2=%d",x1);
}
else
print();

	 
return 0;
}


float x11(int a,int b,int c)
{float z;
  z=(-b+sqrt(b*b-4*a*c))/2*a;
  return z;

}

float x22(int a,int b,int c)
{float z;
  z=(-b-sqrt(b*b-4*a*c))/2*a;
  return z;

}
float x1x2(int a,int b,int c)
{float z;
     z=(-b)/(2*a);
    return z;}
void print()
{     printf("无解");}
