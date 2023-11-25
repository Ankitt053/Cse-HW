#include<stdio.h>
void main()
{
    int add();
    int c=add();
    printf("Sum=%d",c);
}
int add()
{
    int a,b,z;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    z=a+b;

}
