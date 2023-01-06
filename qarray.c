#include<stdio.h>
int a[20],size,front,rear;
void enqueue(int item)
{
 if(rear==size-1)
 printf("Queue is full , insertion is not possible");
 else if(rear==-1)
 {
  front=0;rear=0;
  a[rear]=item;
 }
 else
 {
  rear++;
  a[rear]=item;
 }
}

void dequeue()
{
 if(front==-1)
 printf("Queue is empty");
 else if(front==rear)
 {
  printf("\nDeleted item is %d\n",a[front]);
  front=-1;
  rear=-1;
 }
 else
 {
  printf("\nDeleted item is %d\n",a[front]);
  front++;
 }
}

void display()
{
 int i;
 if(front==-1)
 printf("Queue is empty");
 else
 for(i=front;i<=rear;i++)
 printf("%d\t",a[i]);
}

void main()
{
 int item,opt;
 front=-1,rear=-1;
 printf("Enter the size of the queue");
 scanf("%d",&size);
 do
 {
  printf("\nEnter the option\n");
  printf("\n1:Enqueue\n" 
         "\n2:Dequeue\n" 
         "\n3:Display\n"
         "\n4:Exit\n");
  scanf("%d",&opt);
  switch(opt)
  {
     case 1:  printf("Enter the item to be inserted");
              scanf("%d",&item);
              enqueue(item);
              break;
     case 2:  dequeue();
              break;
     case 3:  display();
              break;
     case 4:  break;
    default:  printf("Option is invalid");
  } 
 }while(opt!=4);
}
