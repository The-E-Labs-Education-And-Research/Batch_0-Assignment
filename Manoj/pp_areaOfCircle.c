#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float Area ;
    printf("Enter Radius of Circle: ");
    scanf("%d",&r);
    Area= PI*r*r;
    printf("Area of Circle is=%.2f",Area);

    return 0;
}