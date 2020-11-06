#include <stdio.h>

int main()
{
    int day;
    printf("enter day number (1-7)\t");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednessday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
    printf("Invalid week number");
        break;
    }
return 0;
}
