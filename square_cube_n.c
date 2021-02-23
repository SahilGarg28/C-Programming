//Print square and cube of each value upto N
#include<stdio.h>

int main()
{
    int n,c;
    printf("Enter n :");
    scanf("%d",&n);
    
    for(c=1;c<=n;c++)
    printf("\n%d --> square is %d \tcube is %d",c,c*c,c*c*c);
    
return 0;    
    
}
