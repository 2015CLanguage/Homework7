#include<stdio.h>
int lc(int x,int y)
{int z,i;
for(i=x;i>0;i--){
	if(x%i==0&&y%i==0){
		z=i;
		break;
	}
}
return z;
}
int sc(int x,int y)
{int p,i;
for(i=x;i<=x*y;i++){
	if(i%x==0&&i%y==0){
		p=i;
		break;
	}
}
return p;
}
int main()
{int x,y,z,p;
printf("请输入两个数字：");
scanf("%d,%d",&x,&y);
z=lc(x,y);
p=sc(x,y);
printf("最大公约数是%d,最小公倍数是%d",z,p);
return 0;
}
