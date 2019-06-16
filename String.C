#include <stdio.h>
#include <conio.h>
#include <string.h>

char str[50];

void copy()
{
char str2[25];
strcpy(str2,str);
printf("The Copied String is %s",str2);
}

void concatenate()
{
char str2[25];
printf("\nEnter the Other String: ");
scanf("%s",&str2);
strcat(str2,str);
printf("The Catenation is %s",str2);
}

void reverse()
{
char temp[25];
strcpy(temp,str);
printf("The Reversed String is %s",strrev(temp));
}

void length()
{
strlen(str);
printf("The Length is %d",strlen(str));

}

void uppercase()
{
char temp[25];
strcpy(temp,str);
printf("%s",strupr(temp));
}

void lowercase()
{
char temp[25];
strcpy(temp,str);
printf("%s",strlwr(temp));
}

void compare()
{
char str2[25];
int len;
scanf("%s",&str2);
len = strcmp(str,str2);
if(len==0)
{
    printf("Two strings are same");
}
else
{
    printf("Two strings are not same");
}

}

int main()
{
    int ch;
    printf("Enter the String: ");
    scanf("%s",&str);
    while(true)
    {
    printf("\n\n1.Copy \n 2.Concatenate \n 3.Reverse \n 4.Length \n 5.Uppercase \n 6.Lowercase \n 7.Compare\n 8.exit\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            copy();
            break;
        case 2:
            concatenate();
            break;
        case 3:
            reverse();
            break;
        case 4:
            length();
            break;
        case 5:
            uppercase();
            break;
        case 6:
            lowercase();
            break;
        case 7:
            compare();
            break;
        default:
            return 0;
    }
    
    }
}