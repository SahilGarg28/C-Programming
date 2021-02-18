//Greatest of 3 no's without ladder if else
//max=(a+b+|a-b|)/2

#include <stdio.h>
int main()
{ float a,b,c,m1,m2,t,t2;
printf("Enter 1st no. ,2nd no. ,3rd no. respectively : ");
scanf("%f%f%f",&a,&b,&c);
t=a-b;
if(t<0)
t = -(t);

m1=(a+b+(t))/2;
t2=c-m1;
if(t2<0)
t2=-(t2);

m2=(c+m1+(t2))/2;
printf("Maximum of 3 no's is = %f",m2);
    return 0;
}
