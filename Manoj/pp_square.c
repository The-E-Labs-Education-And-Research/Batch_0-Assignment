#include<stdio.h>
#define square(a) a*a
int main()
{
    int a,s;
    printf("Enter Number: ");
    scanf("%d",&a);
    s=square(a);
    printf("Square of Number is= %d",s);
    return 0;
}