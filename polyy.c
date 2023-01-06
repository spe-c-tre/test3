#include<stdio.h>
#include<stdlib.h>
struct node
{
 int coeff;
 int exp;
 struct node *link;
};
struct node *phead,*qhead,*rhead;
struct node *readpoly()
{
 struct node *new,*ptr,*head=NULL;
 int n,i;
 printf("\nEnter total number of terms \n:");
 scanf("%d",&n);
 printf("\nEnter coeff and exp:\n");
 for(i=0;i<n;i++)
 {
  printf("\nEnter (coeff%d,exp%d)\n",i,i);
  new=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&new->coeff);
  scanf("%d",&new->exp);
  new->link=NULL;
  if(head==NULL)
  {
   head=new;
   ptr=head;
  }
  else
  {
   ptr->link=new;
   ptr=new;
  }
 }
 return(head);
}
void displaypoly(struct node *head)
{
 struct node *ptr;
 if(head==NULL)
 printf("empty");
 else
 {
  ptr=head;
  while(ptr->link!=NULL)
  {
   printf("%dx^%d+ ", ptr->coeff,ptr->exp);
   ptr=ptr->link;
  }
  printf("%dx^%d \t",ptr->coeff,ptr->exp);
 }
}
struct node *addpoly()
{
 struct node *new,*p,*q,*r,*head=NULL;
 p=phead;
 q=qhead;
 while(p!=NULL&&q!=NULL)
 {
  if (p->exp>q->exp)
  {
   new=(struct node*)malloc(sizeof(struct node));
   new->coeff=p->coeff;
   new->exp=p->exp;
   new->link=NULL;
   p=p->link;
  }
  else if(p->exp==q->exp)
  {
   new=(struct node*)malloc(sizeof(struct node));
   new->coeff=p->coeff+q->coeff;
   new->exp=p->exp;
   new->link=NULL;
   p=p->link;
   q=q->link;
  }
  else
  {
   new=(struct node*)malloc(sizeof(struct node));
   new->coeff=q->coeff;
   new->exp=q->exp;
   new->link=NULL;
   q=q->link;
  }
  if(head==NULL)
  {
   head=new;
   r=head;
  }
  else
  {
   r->link=new;
   r=new;
  }
 }
 while(p!=NULL)
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->coeff=p->coeff;
  new->exp=p->exp;
  new->link=NULL;
  if(head==NULL)
  {
   head=new;
   r=head;
  }
  else
  {
   r->link=new;
   r=new;
  }
  p=p->link;
 }
 while(q!=NULL)
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->coeff=q->coeff;
  new->exp=q->exp;
  new->link=NULL;
  if(head==NULL)
  {
   head=new;
   r=head;
  }
  else
  {
   r->link=new;
   r=new;
  }
  q=q->link;
 }
 return(head);
}
void main()
{
 printf("\nEnter the details of first polynomial :\n");
 phead=readpoly();
 printf("\nEnter the details of second polynomial :\n");
 qhead=readpoly();
 printf("\nDisplaying first polynomial :\n");
 displaypoly(phead);
 printf("\nDisplaying second polynomial :\n");
 displaypoly(qhead);
 rhead=-addpoly();
 printf("\nResultant polynomial is :\n");
 displaypoly(rhead);
}
