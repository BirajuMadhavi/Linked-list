struct node{
char data;
struct node *next;
};

struct node *insertrear(struct node *,char);
struct node *display(struct node *front);
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node *front=NULL;
char val;
int choice;
for( ; ; )
{
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter character:");
scanf(" %c",&val);
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

struct node *insertrear(struct node *front,char val)
{
struct node *t1,*temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
if(front==NULL)
{
temp->next=temp;
front=temp;
}
else
{
t1=front;
while(t1->next!=front)
{
t1=t1->next;
}
temp->next=front;
t1->next=temp;
}
return front;
}

struct node *display(struct node *front)
{
struct node *t1=front;
while(t1->next!=front)
{
printf("%c ",t1->data);
t1=t1->next;
}
printf("%c ",t1->data);
return front;
}

