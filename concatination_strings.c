#include<stdio.h>
int main()
{
    char str1[20],str2[20],str3[40];
    int i,i1;
    printf("Enter 1st statement: ");
    gets(str1);

    printf("Enter 2nd statement: ");
    gets(str2);
    for(i1=0;str1[i1]!='\0';i1++);

    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str3[i+i1]=str2[i];
    }
    str3[i+i1]='\0';
    puts(str3);
    return 0;

}
