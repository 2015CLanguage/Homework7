#include<stdio.h>
int yue(int x,int y);
int bei(int x,int y);
int main(){
	int a,b,c,d;
	printf("请输入两个数:\n");
	scanf("%d,%d",&a,&b); 
	c=yue(a,b);
	d=bei(a,b);
	printf("最大公约数为：\n%d\n",c);
	printf("最小公倍数为：\n%d\n",d);
	return 0;
}


int yue(int x,int y){
	int z,r;

	if(x<y){
		z=x;
		x=y;
		y=z;
	}
	r=x%y;
	while(r != 0){		
		x=y;		
		y=r;
		r=(x%y);
			
	}

	return y;	
}

int bei(int x,int y){
	int s,k;
	k=yue(x,y);
	s=x*y/k;
	return s;
}

