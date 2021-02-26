#include <stdio.h>

int main()
{
int n,n1,l;
printf("Enter any no. :\n");
scanf("%d",&n);

n1=n;
while(n1!=0)
{
    l=n1%10;
    n1=n1/10;
    switch(l)
    {
        case 1:
        printf("One ");
        break;
        
        case 2:
        printf("Two ");
        break;
        
        case 3:
        printf("Three ");
        break;
        
        case 4:
        printf("Four ");
        break;
        
        case 5:
        printf("Five ");
        break;
        
        case 6:
        printf("Six ");
        break;
        
        case 7:
        printf("Seven ");
        break;
        
        case 8:
        printf("Eight ");
        break;
        
        case 9:
        printf("Nine ");
        break;
        
        case 0:
        printf("Zero ");
        break;
        
    }

}
    if(n==0)
    printf("Zero");

}
