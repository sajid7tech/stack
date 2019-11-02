#include<stdio.h>
#include<stdlib.h>
struct node
{

	int data;
	struct node *next;
};

struct node *head;

void push()
{
	int val;
	struct node *top=(struct node*)malloc(sizeof(struct node));
	if(top==NULL)
	{
		printf("not able to push\n");
	}
	else
	{
		printf("enter value to be pushed:");
		scanf("%d",&val);
		if(head==NULL)
		{
			top->data=val;
			top->next=NULL;
			head=top;
		}
	    else
		{
			top->data=val;
		    top->next=head;
			head=top;
		}
		printf("item successfully pushed\a\n");
	}
}


 void pop()
{
	int item;
	struct node *top;
	if(head==NULL)
	{
		printf("underflow\n");
	}
	else
	{
	 	item=head->data;
		top=head;
		head=head->next;
		free(top);
		printf("%d is popped",item);
		printf("item popped");
	}
}


void display()
{
	struct node* temp;
	temp=head;
	while(temp->next!=NULL)
	{
		printf("\n##########################\n");
		printf("Element is : %d\n",temp->data);
		printf("\n##########################\n");
		temp=temp->next;
	}
	
}

int main()
{
	int n=0;
	printf("******************Stack Using Linked List*******************\n");
	while(1)
	{
		printf("1.push\t2.pop\t3.display\t4.exit\n");
		printf("enter option\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: push();
			       	break;
			case 2: pop();
				    break;
			case 3: display();
			 	    break;
			case 4: exit(1);
			
		   	default: printf("enter valid choice");
		}
	}
}

		

