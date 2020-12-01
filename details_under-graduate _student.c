#include<stdio.h>
int main()
{
    char name[99];
    int age;
    long long int number;
    float percent;
    printf("**************STUDENT DATABASE*******************");
    printf("\nEnter name in capital letters:");
    scanf("%s",&name);
    printf("\nEnter age                           :");
    scanf("%d",&age);
    printf("\nEnter contact number        :");
    scanf("%ul",&number);
    printf("\nEnter percentage in metric :");
    scanf("%f",&percent);
    printf("\nThank you. Your data has been saved in our system");
    printf("\n************************************************************");
    
    return 0;
