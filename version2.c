#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int vcom(char v1[],char v2[])
{

    int vnum1=0,vnum2=0,i,j,k;
    char a[10]={'0','1','2','3','4','5','6','7','8','9'};
    for(i=0,j=0;(v1[i]!='\0'||v2[j]!='\0');)
    {
        while(v1[i]!='\0'&&v1[i]!='.')
        {
            for(k=0;k<10;k++)
            {
                if(v1[i]==a[k])
                {
                   vnum1=vnum1*10+k;
                   i++;
                }

            }

        }
        while(v2[j]!='\0'&&v2[j]!='.')
        {
            for(k=0;k<10;k++)
            {
                if(v2[j]==a[k])
                {
                  vnum2=vnum2*10+(v2[j]-'0');
                   j++;
                }
            }

        }
        if(vnum1>vnum2)
            return 1;
        if(vnum2>vnum1)
            return -1;
        vnum1=vnum2=0;
        i++;
        j++;
    }
    return 0;
}


int main()
{
 char v1[50],v2[50];
 scanf("%s",&v1);
 scanf("%s",&v2);
     if (vcom(v1,v2)<0)
        {
        printf("upgread");
        }
    else if (vcom(v1,v2)>0)
        printf("downgtead");
    else
        printf("no change");
   return 0;
}

