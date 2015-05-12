#include<stdio.h>
int main(){
	int x,y,h,l;
	int hcl(int,int);
	int led(int,int,int);
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	h=hcl(x,y);
	printf("H.C.F=%d\n",h);
	l=led(x,y,h);
	printf("L.E.D=%d\n",l);
	return 0;
}
int hcl(int x,int y){
	int t,r;
	if (y>x){
		t=x;x=y;y=t;
	}
	while ((r=x%y)!=0){
		x=y;
		y=r;
	}
	return y;
}

int led(int x,int y,int h){
	return (x*y/h);
}
