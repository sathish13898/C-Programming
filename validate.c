#include<stdio.h>

int main()
{
	char a[20],s1[20],s2[20];
	int i=0,j=0,k=0,count=0;
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if(a[i]=='{'||a[i]=='(')
		{
			s1[j]=a[i];
			j++;
			i++;
		}
		else if(a[i]=='}'||a[i]==')')
		{
		//	printf("%c",a[i]-1);
			if(s1[j-1]==a[i]-1||s1[j-1]==a[i]-2)
			{
				s1[j-1]='\0';
				j--;
				i++;
			}
			else
			{
				printf("invalid");
				return 0;
			}
		}
		else
		{
			s2[k]=a[i];
			k++;
			i++;
		}
		
	}
	for(i=0;i<k;i++)
	{
		if(s2[i]>42&&s2[i]<48)
		{
			if(count==1&&s2[i+1]>64)
			{
				count=0;
				s2[i-1]=s2[i]=s2[i+1]='\0';
				i++;
			}
			else
			{
				printf("invalid");
				return 1;
			}
		}
		else
		{
			count++;
		}
	}
	
	if(s1[0]!='\0'||s2[k-1]!='\0')
	{
		printf("invlid");
	}
	else
	{
		printf("valid");
	}
	return 2;
}
