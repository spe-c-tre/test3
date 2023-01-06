#include<stdio.h>
void quicksort(int a[],int start,int end)
{
int lb,ub,pivot,swap;
if(start<end)
{
pivot=start;
lb=start;
ub=end;
while(lb<ub)
{
while(a[lb]>a[pivot])
{
lb++;
}
while(a[ub]>a[pivot])
{
ub--;
}
if(lb<ub)
{
swap=a[lb];
a[lb]=a[ub];
a[ub]=swap;
}
}
swap=a[ub];
a[ub]=a[pivot];
a[pivot]=swap;
quicksort(a,start,ub-1);
quicksort(a,ub+1,end);
}
}
void main()
{
int a[20],n,lb,ub;
printf("enter the limit");
scanf("%d",&n);                      
printf("enter the array elements");
for(lb=0;lb<n;lb++)
{
scanf("%d",&a[lb]);	
}
quicksort(a,0,n-1);
printf("sorted array is : ");
for(lb=0;lb<n;lb++)
{
printf("\t%d",a[lb]);	
}
}

