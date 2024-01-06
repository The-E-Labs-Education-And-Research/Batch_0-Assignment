//print AP for 1,3,5,7,9 ........

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=2*n-1; i=i+2)
    {
        printf("%d\t",i);
    }
    return 0;
}