#include<stdio.h>
#include<math.h>
void real();
void equal();
void imagine();
float a,b,c,judge,x1,x2,p,q;

int main()
{

    printf("Please enter a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    judge=b*b-4*a*c;
    p=-b/(2*a);
    if(judge>0)
        real(a,b,c);
    else if(judge==0)
        equal(a,b,c);
    else
        imagine (a,b,c);
    return 0;
}

void real()
{
    q=sqrt(judge)/(2*a);
    x1=p+q;
    x2=p-q;
    printf("The equation has two real roots: x1=%f,x2=%f",x1,x2);
}

void equal()
{
    printf("The equation has two equal roots: x1=x2=%f",p);
}

void imagine()
{
    q=sqrt(-judge)/(2*a);
    printf("The equation has two complex roots:x1=%f+%fi,x2=%f-%fi",p,q,p,q);
}
