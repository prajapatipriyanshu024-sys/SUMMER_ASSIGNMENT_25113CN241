#include<stdio.h>
int main()
{
    int num,temp,digit,product=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        product*=digit;
        temp/=10;
    }
    printf("Product of digits: %d\n", product);
    return 0;
}