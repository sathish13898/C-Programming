#include <stdio.h>
#include <conio.h>
int main()
{
int i,j,count,a,n;
printf ("Enter the Range: ");
scanf ("%d",&n);
for(i=2;i<=n;i++)
{
  count=0;
  for(j=2;j<=n;j++)
  {
    if(i!=j)
    {
    a=i%j;
    if(a==0)
    {
    count++;
    }
    }
  }
if(count==0)
 {
printf ("%d \n",i);
}
}

}