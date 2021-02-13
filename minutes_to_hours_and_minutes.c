//input time in minutes
//convert into Valid hour and minutes
//h=m/60,m=m-h*60
#include <stdio.h>
int main()
{
    int h,m;
    printf("Enter time in minutes:");
    scanf("%d",&m);
    h=m/60;m=m-h*60;
    printf("time is %d Hours and %d minutes",h,m);
    
    return 0;
}
