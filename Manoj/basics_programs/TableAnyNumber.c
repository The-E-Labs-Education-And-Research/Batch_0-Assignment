#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=n; i<=n*10; i=i+n)
    {
        printf("%d\t",i);
    }
    return 0;
}