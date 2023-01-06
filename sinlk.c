#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *head;
void display()
{
 struct node *ptr;
 if (head==NULL)
 printf("List is empty");
 else
 {
  ptr=head;
  printf("\nElements are : \n");
  while(ptr!=NULL)
  {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
  }
 }
}
void insert_front(int x)
{
 struct node *new;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=x;
 new->link=head;
 head=new;
 display();
}
void insert_end(x)
{
 struct node *new,*ptr;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=x;
 new->link=NULL;
 if(head==NULL)
 head=new;
 else
 {
  ptr=head;
  while(ptr->link!=NULL)
  ptr=ptr->link;
  ptr->link=new;
 }
 display();
}
void insert_after(key,x)
{
 struct node *new,*ptr;
 if (head==NULL)
 printf("Key not found");
 else
 {
  ptr=head;
  while(ptr->link!=NULL&&ptr->data!=key)
  ptr=ptr->link;
  if(ptr->data!=key)
  printf("Key not found");
  else
  {
   new=(struct node *)malloc(sizeof(struct node));
   new->data=x;
   new->link=ptr->link;
   ptr->link=new;
  }
 }
 display();
}
void delete_front()
{
 struct node*temp;
 if (head==NULL)
 printf("List is empty");
 else
 {
  temp= head;
  head=head->link;
  free(temp);
 }
 display();
}
void delete_end()
{
 struct node *temp,*prev,*curr;
 if(head==NULL)
 printf("List is empty");
 else if(head->link==NULL)
 {
  temp=head;
  head=NULL;
  free(temp);
 }
 else
 {
  prev=head;
  curr=head->link;
  while(curr->link!=NULL)
  {
   prev=curr;
   curr=curr->link;
  }
  prev->link=NULL;
  free(curr);
 }
 display();
}
void delete_any(int key)
{
 struct node*temp,*prev,*curr;
 if(head==NULL)
 printf("List is empty");
 else if(head->data==key)
 {
  temp=head;
  head=head->link;
  free(temp);
 }
 else
 prev=head;
 curr=head;
 while(curr->data!=key&&curr->link!=NULL)
 {
  prev=curr;
  curr=curr->link;
 }
 if(curr->data!=key)
 printf("Key not found");
 else
 {
  prev->link=curr->link;
  free(curr);
 }
 void display();
}
void main()
{
 int opt,x,key;
 do
 {
  printf("\n Enter the option"
        "\n1 Insert at front"
        "\n2 Insert at end"
        "\n3 Insert at any position"
        "\n4 Delete at front"
        "\n5 Delete at end"
        "\n6 Delete at any position"
        "\n7 Display "
        "\n8 Exit");
  scanf("%d",&opt);
  switch(opt)
  {
    case 1:   printf("Enter the new data");
              scanf("%d",&x);
              insert_front(x);
              break;
    case 2:   printf("Enter the new data");
              scanf("%d",&x);
              insert_end(x);
              break;
    case 3:   printf("Enter the search key");
              scanf("%d",&key);
              printf("Enter the new data");
              scanf("%d",&x);
              insert_after(key,x);
              break;
    case 4:   delete_front();
              break;
    case 5:   delete_end();
              break;
    case 6:   printf("Enter the node to be deleted");
              scanf("%d",&key);
              delete_any(key);
              break;
    case 7:   display();
              break;
  }
 }while(opt!=8);
}
