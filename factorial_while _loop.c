#include <stdio.h>

int main()
{
long long int i=1,n,f=1;
printf("Enter n: ");
scanf("%lld",&n);

while(i<=n)
{
    f=f*i;
    i++;
}
printf("Factorial of %lld is %lld",n,f);

return 0;
}
