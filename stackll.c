#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *top;
void display()
{
 struct node *ptr;
 if(top==NULL)
  printf("\n Stack is empty \n");
 else
  ptr=top;
  printf("\nStack elememts are :\n");
  while(ptr!=NULL)
  {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
  }
}
void push(int item)
{
 struct node *new;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=item;
 new->link=top;
 top=new;
 display();
}
void pop()
{
 struct node *temp;
 if (top=NULL)
  printf("\n Stack is empty\n");
 else
  temp=top;
  printf("\n Popped items is %d\n",top->data);
  top = top->link;
  free(temp);
 display();
}
void main()
{
 int size,opt,n;
 printf("\nEnter the stack limit :\n");
 scanf("%d",&size);
 do
 {
  printf("\n1. Push"
         "\n2. Pop"
         "\n3. Display"
         "\n4. Exit ");
  printf("\nEnter the options :\n");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1 : printf("\nEnter the element to be inserted :\n");
            scanf("%d",&n);
	    push(n);
            break;
   case 2 : pop();
	    break;
   case 3 : display();
	    break;
   case 4 : break;
   default: printf("\nYou entered a invalid option\n");
  }
 }while(opt!=4);
}
