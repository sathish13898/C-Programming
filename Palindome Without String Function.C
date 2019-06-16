#include <stdio.h>
#include <conio.h>
int main()
{
    char a[25]={'\0'},b[25];
    int i,flag=0,j,n=0;
    printf("Enter the text: \n");
    scanf("%s",&a);


         //Calculating Length
        for(i=0;i<25;i++)
        {
        if (a[i]!='\0')
        {
        n++;
        }
        }


        //Placing Values in B  
        for(i=n-1;i>=0;i--)
        {
            b[n-(i+1)]=a[i];
        }

        //Checking Condition
        for(i=n-1;i>=0;i--)
        {
           if(a[i]!=b[i])
           {
               flag=1;
           }
        }


        if(flag==0)
        {
            printf("the string is a palindrome \n %s \t %s",a,b);
        }
        else 
        {
            printf("the string is not a palindrome \n %s \t %s",a,b);
        }
}
