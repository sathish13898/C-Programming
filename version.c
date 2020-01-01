#include<stdio.h>
#include<conio.h>

int vcom(string v1,string v2)
{

    int vnum1=0,vnum2=0,i,j;
    for(i=0,j=0;(i<v1.length()||j<v2.length());)
    {
        while(i<v1.length()&&v1[i]!='.')
        {
            vnum1=vnum1*10+(v1[i]-'0');
            i++;
        }
        while(j<v2.length()&&v2[j]!='.')
        {
            vnum2=vnum2*10+(v2[]-'0');
            j++;
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
 string v1="1.0.3",v2="1.0.7";
     if (vcom(v1,v2)<0){
        printf("v1 is small");}
    else if (vcom(v1,v2)>0)
        printf("v2 is small");
    else
        printf("same");
   return 0;
}
