#include<stdio.h>
int x;
int main(){
	void judge(int);
	printf("x=");
	scanf("%d",&x);
	judge (x);
	return 0;
}
void judge(int x){
	int r,i;
	if (x<=1){
		printf("wrong number\n");
	}
	if (x==2){
		printf("%d is a prime.\n",x);
	}
	for (i=2;i<x;i++){
		r=x%i;
		if (r==0){
			printf("%d is not a prime.\n",x);
			break;
		}
		else if (i==(x-1)){
			printf("%d is a prime.\n",x);
		}
	}
}
