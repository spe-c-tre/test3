#include<stdio.h>
int size,top,a[100];
void push(int item)
{
 if(top==size-1)
 printf("\nStack is full\n");
 else
 top++;
 a[top]=item;
 printf("%d is inserted",a[top]);
}
void pop()
{
 if(top==-1)
 printf("\nStack is empty\n");
 else
 printf("\npopped element is %d\n",a[top]);
 top--;
}
void display()
{
 int i;
 if (top==-1)
 printf("\nStack is empty\n");
 else
 printf("\nThe elements are :\n ");
 for(i=0;i<=top;i++)
 {
  printf("\n%d",a[i]);
 }
}
void status()
{
 float free;
 if(top==-1)
 printf("\nStack is empty\n");
 else 
 {
  printf("/nStack top elements is %d\n",a[top]);
  if(top==size-1)
  {
   printf("stack is filled and size of stack is %d",size-1);
   free=(float)(size-top-1)*100/size;
   printf("\nFree space is = %f",free);
  }
 }
}
void main()
{
 int opt,n;
 top=-1;
 printf("\nEnter the stack limit :\n");
 scanf("%d",&size);
 do
 {
   printf(" \n1. Push"
           "\n2. Pop" 
           "\n3. Display"
           "\n4. Status"
           "\n5. Exit ");
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
     case 4 : status();
	      break;
     case 5 : break;
     default: printf("\nYou entered an invalid option\n");
   }
 }while(opt!=5);
}
