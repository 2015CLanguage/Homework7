#include <stdio.h> 
 #include <math.h> 
 int sushu(int n) 
 { 
 	int i,sign; 
 	sign=1; 
 	for(i=2;(i<=sqrt(n))&&(sign==1);i++) 
 		if(n%i==0) 
 		{ 
 			sign=0; 
 			break; 
 		} 
 		return(sign); 
 } 
 void main() 
 { 
 	int n; 
 	printf("请输入要判断的数:\n"); 
 	scanf("%d",&n); 
 	if(sushu(n)) 
 		printf("所输入的数是素数.\n"); 
 	else 
 		printf("所输入的数不是素数.\n"); 
 
 
 } 
