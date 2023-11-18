#include<stdio.h>
void main()
{
    int arr[30],num,i,loc;
    printf("\n Enter the size of array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("ENter the elements arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the location to delete");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;

    }
    num--;
    for(i=0;i<num;i++)
{
printf("\n% d",arr[i]);
}
} 
