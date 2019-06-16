#include <stdio.h>
#include <conio.H>
int main()
{
    int a,i;
    printf("Enter the Number : ");
    scanf("%d",&a);
    for (i=1;i<a/2;i++)
    {
        if(a%i==0 && a/i==i)
        {
            printf("%d is a Prefect Square of %d" ,a,i);
        }
    }
}