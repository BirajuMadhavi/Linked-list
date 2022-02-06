struct node{
int data;
struct node *next;
};

struct node *insertrear(struct node *,int);
struct node *display(struct node *front);
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node *front=NULL;
int val,choice;
for( ; ; )
{
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter value\n");
scanf("%d",&val);
front=insertrear(front,val);
break;
}
case 2:
{
front=display(front);
break;
}
}
}
}

struct node *insertrear(struct node *front,int val)
{
struct node *t1,*temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
if(front==NULL)
{
temp->next=NULL;
front=temp;
}
else
{
t1=front;
while(t1->next!=NULL)
{
t1=t1->next;
}
temp->next=t1->next;
t1->next=temp;
}
return front;
}

struct node *display(struct node *front)
{
struct node *t1=front;
while(t1!=NULL)
{
printf("%d ",t1->data);
t1=t1->next;
}
return front;
}
