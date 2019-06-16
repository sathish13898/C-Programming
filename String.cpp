#include <stdio.h>
#include <conio.h>
#include <string.h>
char str[50];
void main()
{
    int ch;
    printf("Enter the String: ");
    scanf("%s",&str);
    printf("\nEnter Your Choice : \n 1.Copy \n 2.Concatenate \n 3.Reverse \n 4.Length \n 5.Uppercase \n 6.Lowercase \7.exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            copy();
        case 2:
            concatenate();
        case 3:
            reverse();
        case 4:
            length();
        case 5:
            uppercase();
        case 6:
            lowercase();
        case 7:
            break;
    }
}
void copy()
{
char str2[25];
strcpy(str2,str);
printf("The Copied String is %s",str2);
}

void concatenate()
{
char str2[25];
scanf("%s",&str2);
strcat(str2,str);
printf("The Catenation is %s",str2);
}

void reverse()
{
char str2[25];
strrev(str);
printf("The Reversed String is %s",str);
}

void length()
{
int n;
n=strlen(str);
printf("The Length is %d",n);
}

void uppercase()
{
strupr(str);
printf("%s",str);
}

void lowercase()
{
strupr(str);
printf("%s",str);
}
