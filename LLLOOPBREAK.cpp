//finding the loop and breaking the loop 
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
struct node *head;
node *create(node* head,int x)
{
  struct node *newnode;
  struct node *temp=head;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->next=NULL;
  if(head==NULL)
  {
    return newnode;
  }
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newnode;
  return head;
}

void loop()
{
  struct node *first, *second;
  first=head;
  second=head;
  do{
    first=first->next;
    second=second->next;
    if(first!=NULL)
    first=first->next;
  }while(first!=NULL & second!=NULL & first!=second);
  if(first==second)
  {
  printf("LOOP");
  }
  else
  printf("NO LOOP");
}

void display(node *head)
{
  struct node *temp=head;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
int main(){
  head=NULL;
  int a[6]={1,2,3,4,8,10},i;
  for(i=0;i<6;i++)
  {
    head=create(head,a[i]);
  }
  printf("list created\n");
    struct node *t1,*t2;
    t1=head->next;
    t2=head->next->next->next->next->next;
    t2->next=t1;
  loop();
  t2->next=NULL;
  printf("\nAfter disconnecting the loop\n");
  display(head);
}
