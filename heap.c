#include<stdio.h>
void printArray(int A[],int n);
void heapsort(int A[],int n) ;
void BuildMaxHeap(int A[],int n);
void heapify(int A[],int n,int i);
void main()
{
int n,i,A[20];
printf("Enter the limit :\n ");
scanf("%d",&n);
printf("\nEnter the array elements :\n ");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("\nBefore sorting array elements are :\n ");
printArray(A,n);
heapsort(A,n);
printf("\nAfter sorting array elements are :\n ");
printArray(A,n);
}
void heapsort(int A[],int n)
{
int i;
BuildMaxHeap(A,n);
for(i=n-1;i>=0;i--)
{
int temp=A[0];
A[0]=A[i];
A[i]=temp;
heapify(A,i,0);
}
};
void BuildMaxHeap(int A[],int n)
{
int i;
for(i=(n/2)-1;i>=0;i--)
{
heapify(A,n,i);
}
};
void heapify(int A[],int n,int i)
{
int largest=i;
int left=(2*i)+1;
int right=(2*i)+2;
if(left<n&&A[left]>A[largest])
{
largest=left;
}
if(right<n&&A[right]>A[largest])
{
largest=right;
}
if(largest!=i)
{
int temp=A[i];
A[i]=A[largest];
A[largest]=temp;
heapify(A,n,largest);
}
};
void printArray(int A[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\t%d",A[i]);
}
};
