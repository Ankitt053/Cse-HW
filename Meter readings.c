#include<stdio.h>
void main()
{
    int startingreading,endingreading,units;
    float rate,bill;
    printf("Enter the starting readings :");
    scanf("%d",&startingreading);
    printf("Enter the Ending reading :");
    scanf("%d",&endingreading);
    units=startingreading-endingreading;

    if(units>500){rate=4.50;}
    else if
    (units>=200 && units<=500){rate=3.50;}
    else if
    (units>=100 && units<=200){rate=2.50;
    }else{
        rate=1.50;}
    bill=units*rate;
    printf("Bill :%f",bill);
}
