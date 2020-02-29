#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>

struct node
{
	int data;
	struct node* next;
}*temp,*head=NULL,*p,*q;
int insert()
{
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next= NULL;
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
int delete()
{
	int a,b=0;
	scanf("%d",&a);
	p=head;
	
	if(head!=NULL)
	{
		if(p->data==a)
		{
			head=NULL;
		}
		else
		{
			while(p->next!=NULL)
			{
				if(p->next->data==a&&p->next->next!=NULL)
				{
					p->next=p->next->next;
					return ++b;
				}
				else if(p->next->data==a&&p->next->next==NULL)
				{
					p->next=NULL;
					return ++b;
				}
				
			}
			if(b==0)
			{
				printf("\nnum not exist\n");
			}
		}
	}
	else
	{
		printf("\nempty list\n");
	}
}
void display()
{
	if(head!=NULL)
	{
		p=head;
		while(p->next!=NULL)
		{
			printf("%d",p->data);
			p=p->next;
		}
		printf("%d",p->data);
	}
	else
	  printf("empty list");
}


int main()
{
	int ch;
	int insert();
	int delete();
	void display();
	while(1)
	{
		printf("enter the choise");
		printf("1.insert 2.delete 3.display 4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();break;
			case 2:delete();break;
			case 3:display();break;
			default:return 0;
		}
	}
	getch();
	return 0;
}
