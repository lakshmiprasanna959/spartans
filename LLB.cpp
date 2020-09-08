//Linkedlist implementation insert at beggining
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
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
	printf("list is:");
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int n,i,x;
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
	insert(x);
	print();
	}
}
