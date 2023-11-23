#include<stdio.h>
#include<string.h>
void main()
{ 

    char a[100];
    printf("Enter the String ");
    scanf("%s[^\n]",a);
    int l=0;
    for(int i=0;;i++)
    {
        if(a[i]=='\0')
        break;
        else
        l++;
    }
    printf("The Length is=%d",l);

    }
   
