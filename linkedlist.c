#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>

struct node
{
	int data;
	struct node* next;
}*temp,*head=NULL,*p;
void insert()
{
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->next= NULL;
	}
	else
	{
		p=head;
		while(p->next=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
void delete()
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
	void insert();
	void delete();
	while(1)
	{
		printf("enter the choise");
		printf("1.insert 2.delete 3.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();break;
			case 2:delete();break;
			default:break;
		}
	}
	getch();
	return 0;
}
