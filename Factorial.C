#include <stdio.h>
#include <conio.h>
int main()
{
    int i,a,Fact=1;
    printf("Enter the Factorial Number : ");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        Fact=Fact*i;
    }
    printf("The Factorial of %d is %d",a,Fact);
}