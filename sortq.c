#include<stdio.h>
void quicksort(int a[20],int first,int last)
{
int i,j,pivot,temp;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(a[i]<=a[pivot])
{
i++;
}
while(a[j]>=a[pivot])
{
j--;
}
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[j];
a[j]=a[pivot];
a[pivot]=temp;
quicksort(a,first,j-1);
quicksort(a,j+1,last);
}
}
void main()
{
int a[20],n,i;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}
quicksort(a,0,n-1);
printf(" sorted array is  : ");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);	
}
}





