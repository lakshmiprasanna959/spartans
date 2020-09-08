//Insertion at ending
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void inserte(int x)
{
	struct node* temp=head;
	node* news;
	news=(node*)malloc(sizeof(node));
	news->data=x;
	news->next=NULL;
	if(head==NULL)
	{
		temp=news;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=news;
	
}
void insert(int x)
{
	node* newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=x;
	newnode->next=head;
	head=newnode;
}
void print()
{
	printf("list");
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	head=NULL;
	int n,i,x;
	scanf("%d",&n);
	insert(2);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		inserte(x);
		print();
	}
}
