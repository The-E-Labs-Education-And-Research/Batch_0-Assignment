 #include<stdio.h>
 int main()
 {
    float num1,num2,result;
    char operator;

    printf("Enter first number : ");
    scanf("%f",&num1);

    printf("Enter an operator(+,-,*,/) : ");
    scanf("%f",&operator);

    printf("Enter second number : ");
    scanf("%f",&num2);

    switch(operator)
    {
        case'+' :
        result= num1+num2;
        break;

        case'-':
        result= num1-num2;
        break;

        case'*' :
        result= num1*num2 ;
        break ;

        case'/' :
        if(num2 !=0)
        {
            result= num1/num2 ;
        }
        else 
        {
            printf("Operation can not be performed ");
            return 1;
        }
        break;

        default :
        printf("Invalid operator ");
            return 1;
    }
    printf("result= %f",result);
    return 0;
 }