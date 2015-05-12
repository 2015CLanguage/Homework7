# Homework7

#include <stdio.h>

int main() {
    void greater(float a,float b,float c);
    void equal(float a,float b,float c);
    void smaller(float a,float b,float c);
    float a,b,c,x1,x2,disc;
    printf("please input a,b,c !");
    scanf("%f,%f,%f",&a,&b,&c);
    printf("equation is :%f*%f*x*x+b*b*x+%f=0\n",a,b,c);
    printf("root of the equation :\n");
    disc=b*b-4*a*c;
    if(disc>0)
        greater(a,b,c);
    else if(disc==0)
        equal(a,b,c);
    else
        smaller(a,b,c);
    return 0;
}
void greater(float a,float b,float c)
{
    float x1,x2,disc=b*b-4*a*c;
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);
    printf("x1=%f,x2=%f\n",x1,x2);

}
void equal(float a,float b,float c)
{
    float x1;
    float disc=b*b-4*a*c;
    x1=-b/(2*a);
    printf("x1=x2=%f\n",x1);

}
void smaller(float a,float b,float c)
{
    float x1,x2;
    float disc=b*b-4*a*c;
    x1=-b/(2*a);
    x2=sqrt(-disc)/(2*a);
    printf("x1=%f+%f*i,x2=%f-%f*i\n",x1,x2,x1,x2);

}
