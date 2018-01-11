#include<stdio.h>
#include<stdlib.h>


struct node 
{
	int data;
	struct node * next;
};

int Insert(struct node ** head, int no)
{
	struct node * newnode= (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		return 0;
	}
	newnode->data=no;
	newnode->next=NULL;
	if(*head==NULL)
	{
		*head=newnode;
	}
	else
	{
		newnode->next=*head;
		*head=newnode;
	}
}

void Display(struct node* head)
{
	while(head !=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

int main()
{

	struct node * first =NULL;
	Insert(&first,10);
	Insert(&first,20);
	Insert(&first,30);
	Insert(&first,40);
	Display(first);

return 0;
}
