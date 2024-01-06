#include<stdio.h>
void main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
if(age>=18 && age<60){
    printf("Adult \n");
    printf("Right to vote \n");
    printf("Mature");
}
else if(age>=5 && age<=17){
    printf("Children \n");
    printf("Happy life \n");
    printf("No tension");
}
else if(age>=60){
    printf("Grand Parents \n");
    printf("Only Rest \n");
    printf("Old");

}
else if(age>=1 && age<=4){printf("Kids");

}
}
