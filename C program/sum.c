#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Enter value of x :- ");
    scanf("%d", &x);
    printf("Enter value of y :- ");
    scanf("%d", &y);
    sum = x + y;
    printf("Sum of %d and %d is %d .", x, y, sum);
}