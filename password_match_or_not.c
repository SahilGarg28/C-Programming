#include <stdio.h>

int main()
{
    char pass1[20],pass2[20];
    int i,flag=1,i1,i2;
printf("Enter password: ");
    gets(pass1);

printf("Enter password again: ");
    gets(pass2);

    for(i1=0;pass1[i1]!='\0';i1++);
    for(i2=0;pass2[i2]!='\0';i2++);
    if(i1==i2)
    {
    for(i=0;pass1[i]!='\0';i++)
    {
        if(pass1[i]!=pass2[i])
        {
        flag=0;
break;
        }
    }
    if(flag==1)
printf("Password match");
    else
printf("Not same");
    }
    else
printf("Password not match");


    return 0;
}
