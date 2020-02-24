#include<stdio.h>

int main()
{
 int a[20],temp,i=0,j,k,sum,rem,len=0,n=0,dec=0,base=1,l,numd,val,same,add,max=0;
 scanf("%d",&numd);
 for(j=0;j<numd;j++)
 {
 	scanf("%d",&a[j]);
 }
 for(j=0;j<numd;j++)
 {
 	n=n*10+1;
 }
 while(n!=0)
 {
 l=n%10;
 n=n/10;
 dec+=l*base;
 base=base*2;	
 }
 for(i=1;i<=dec;i++)
 {
 	temp=i;
 	sum=0;
 	val=1;
 	add=0;
 	while(temp>0)
 	{
 		rem=temp%2;
 		sum=(sum)+rem*val;
 		temp=temp/2;
 		val*=10;
 	}
 	same=sum;
 	for(j=numd-1;j>=0;j--)
 	{
 		k=sum%10;
 		sum=sum/10;
 		if(k==1)
 		{
 			add+=a[j];
		 }
	 }
	 if(max<add)
	 max=add;
	 
	 
	 }
	 printf("%d",max);
	 
}
