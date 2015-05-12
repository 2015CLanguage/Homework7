#include <stdio.h>
#include <math.h>
void isprime(int a){
	int i,b=1;
	if (a==2||a==3){
		printf("是素数。");
	}else if(a==4){
		printf("不是素数。"); 
	}
	else{ 
	for(i=2;i<sqrt(a);i++){
		if(a%i==0){
			printf("不是素数。");
			b=1;
			break; 
		}
		b=0;
	}
	if(b==0){
		printf("是素数。"); 
	}
}
}

int main(){
	void isprime(int);
	int a;
	scanf("%d",&a);
	isprime(a);
	return 0;
}
