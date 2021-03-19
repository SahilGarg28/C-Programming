#include <stdio.h>
int main()
{
    char name[20],name2[20];
    int i,i1,flag=0;
    printf("Enter name: ");//sahil
    gets(name);
    for(i1=0;name[i1]!='\0';i1++);
    for(i=0;name[i]!='\0';i++)
    {
        name2[i]=name[i1-1];
        i1--;
    }
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=name2[i])
        flag=1;
    }
    if(flag==1)
    printf("not pallindrome");
    else
    printf("palindrome");
}
