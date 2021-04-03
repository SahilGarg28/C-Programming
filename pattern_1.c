/*
Enter N: 5
r       b       r       r       b       r
r       r       b       r       r        
b       r       r       b
r       b       r
r       r
b
*/

#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter N: ");//3
    scanf("%d",&n);
    
    for(r=n;r>=0;r--)
    {
        for(c=0;c<=r;c++)
        {

                if((c+r)%3==0)
                printf("b\t");
                else
                printf("r\t");
            
        }
        printf("\n");
    }
}
