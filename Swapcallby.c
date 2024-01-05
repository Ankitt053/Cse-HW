#include <stdio.h>
swap (int *, int *);
int main()
{
    int a, b;
    printf("Enter value of a & b: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping:\n");
    printf("a = %d b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping:\n");
    printf("a = %d b = %d", a, b);
    return 0;
}
swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
