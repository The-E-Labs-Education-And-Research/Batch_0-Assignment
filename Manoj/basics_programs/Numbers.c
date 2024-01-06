// Print many numbers start from 1

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("Number is %d\n",i);
    }
    return 0;
}