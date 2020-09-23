#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Ist value ");
    scanf("%d",&a);
    
    printf("Enter 2nd value ");
    scanf("%d",&b);
    
    printf("Enter 3rd value ");
    scanf("%d",&c);
    
    if(a>b&&a>c)
    {
        printf("%d is greater than %d and %d",a,b,c);
    }
    else
    {
        if(b>c)
    
      {  
          printf("%d is greater than %d and %d",b,a,c);
      }
        
        else
       {
           printf("%d is greater than %d and %d",c,a,b);
       }
    }   
    return 0;
}
