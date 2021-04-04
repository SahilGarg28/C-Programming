/*
         1  
      1  2  
   1  2  3  
1  2  3  4 
*/
#include<stdio.h>
void main()
{
    int r,t,c;
    for(r=1;r<=4;r++)
    {
        for(t=3;t>=r;t--)
        {
        printf("   ");
        }
        for(c=1;c<=r;c++)
        {
        printf("%d  ",c);
        }
        printf("\n");
    }
}
