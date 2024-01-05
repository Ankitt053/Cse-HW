#include<stdio.h>
int main()
{
    float amount;
    float rate,totalinterest,tensure;
    printf("Enter the loan amount");
    scanf("%f",&amount);
    printf("Enter the Tensure:");
    scanf("%f",&tensure);
    if(amount>=10000){rate=0.20;
    }else if
    (amount>=8000 && amount<=9999){rate=0.18;


    }else if
    (amount<8000){rate=0.16;}
    totalinterest=amount*tensure;
    printf("Total interest:%.2f",totalinterest);
return 0;
}
