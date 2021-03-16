#include<stdio.h>
struct product
{
    float price,discount,net;
};
int main()
{
    int n,i;
    printf("Enter no. of articles: ");
    scanf("%d",&n);
    struct product s[n];
    for(i=0;i<n;i++)
    {
        printf("--------------%d product--------------\n",i+1);
        printf("Enter price: ");
        scanf("%f",&s[i].price);

        printf("Enter discount: ");
        scanf("%f",&s[i].discount);

        s[i].net=s[i].price*(100-s[i].discount)/100;

    }
    printf("--------Bill--------\n");
    printf("price\t   discount\t   net\n");
    float bill=0;
    for(i=0;i<n;i++)
    {
        printf("%.2f\t   %.2f\%\t   %.2f\n",s[i].price,s[i].discount,s[i].net);
    }
    for(i=0;i<n;i++)
    {
        bill=bill+s[i].net;
    }
    printf("Total price you have to pay is %f\n",bill);
    printf("Average price is %f\n",bill/n);

    return 0;
}
