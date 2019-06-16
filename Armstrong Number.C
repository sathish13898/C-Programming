#include <stdio.h>
#include <conio.h>
int main()
{
    int temp,a,sum=0,rem;

    printf("Enter the Number : ");
    scanf("%d",&a);
    temp=a;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }


    if(a==sum)
    {
        printf("%d is a Armstrong Number",a);
    }
    else
    {
        printf("%d is a Not Armstrong Number",a);
    }
    
}