#include<stdio.h>
#include<conio.h>

int vcom(char* v1,char* v2)
{

    int vnum1=0,vnum2=0,i,j;
    for(i=0,j=0;v1[i]!='\0',v2[j]!='\0';)
    {
        while(v1[i]!='\0'&&v1[i]!='.')
        {
            vnum1=vnum1*10+(v1[i]-'0');
            i++;
        }
        while(v2[j]!='\0'&&v2[j]!='.')
        {
            vnum2=vnum2*10+(v2[j]-'0');
            j++;
        }
        
        if(vnum1>vnum2)
            return 1;
        if(vnum2>vnum1)
            return -1;
        vnum1=0;
		vnum2=0;
        i++;
        j++;
    }
    return 0;
}


int main()
{
 char v1[]="1.0.3",v2[]="1.0.3";
     if (vcom(v1,v2)<0)
        printf("v1 is small");
    else if (vcom(v1,v2)>0)
        printf("v2 is small");
    else
        printf("same");
   return 0;
}
