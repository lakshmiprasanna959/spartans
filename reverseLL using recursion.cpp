//reverse using recursion
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
node *reverse(node *head)
{
struct node *prev=NULL, *next=NULL, *current=head;
while(current!=NULL)
{
next=current->next;
current->next=prev;
reverse(next);
head=prev;
}

}
node *inserte(node *head,int x)
{
	struct node* temp=head;
	node* news;
	news=(node*)malloc(sizeof(node));
	news->data=x;
	news->next=NULL;
	if(head==NULL)
	{
		return news;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=news;
	return head;
	
}
void print(node *head)
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
		head=inserte(head,x);
	}
	printf("Before reversal\n");
	print(head);
	head=reverse(head);
	printf("After reversal\n");
	print(head);
	
}
