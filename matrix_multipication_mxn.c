#include <stdio.h>

int main()
{
    int ra,ca,rb,cb,r,c,k,sum=0;
    printf("Enter number of rows of A: ");
    scanf("%d",&ra);

    printf("Enter number of coloumns of A: ");
    scanf("%d",&ca);
    
    printf("Enter number of rows of B: ");
    scanf("%d",&rb);

    printf("Enter number of columns of A: ");
    scanf("%d",&cb);
    
    int A[ra][ca],B[rb][cb],AB[ra][cb];
    
    if(ca!= rb)
    printf("Invalid case");
    
    else
    {
          printf("\n--------------Input values of first matrix--------------\n");
          for(r=0;r<ra;r++)
          {
                for(c=0;c<ca;c++)
                {
                      printf("Enter value at A[%d][%d] index: ",r,c);
                      scanf("%d",&A[r][c]);
                }
          }
          printf("\n--------------Input values of second matrix--------------\n");
          for(r=0;r<rb;r++)
          {
                for(c=0;c<cb;c++)
                {
                      printf("Enter value at B[%d][%d] index: ",r,c);
                      scanf("%d",&B[r][c]);
                }
          }
          
          for(r=0;r<ra;r++)
          {
                for(c=0;c<cb;c++)
                {
                      for(k=0;k<ca;k++)
                      {
                            sum=sum+A[r][k]*B[k][c];
                      }
                      AB[r][c]=sum;
                      sum=0;
                }
          }
          
          printf("\n--------------Multiplied matrix is--------------\n");
          
          for(r=0;r<ra;r++)
          {
                for(c=0;c<cb;c++)
                {
                      printf("%d\t",AB[r][c]);
                }
                printf("\n");
          }
          
    }
    return 0;
}
