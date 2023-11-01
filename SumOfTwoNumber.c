#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x :");
    scanf("%d",&x);
    int y;
    printf("\nEnter the value of y\n :");
    scanf("%d",&y);
    int z = x + y;
    printf("The sum of two number is : %d",z);
    return 0;
}