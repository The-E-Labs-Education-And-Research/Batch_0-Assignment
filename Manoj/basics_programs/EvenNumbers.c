// Print Even Numbers

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\t ",i);
        }
    }
    return 0;
}