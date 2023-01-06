#include<stdio.h>
void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
void main()
{
int a[20],i,n,lb,ub;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
lb=0;
ub=n-1;
mergesort(a,lb,ub);
printf("sorted array is : ");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
void mergesort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge(a,lb,mid,ub);
}
};
void merge(int a[],int lb,int mid,int ub)
{
int i,j,k,b[20];
i=lb;
j=mid+1;
k=lb;
while(i<=mid&&j<=ub)
{
if(a[i]<=a[j])
{
b[k]=a[i];
i++;
k++;
}
else
{
b[k]=a[j];
j++;
k++;
}
}
if(i>mid)
{
while(j<=ub)
{
b[k]=a[j];
j++;
k++;
}
}
else
{
while(i<=mid)
{
b[k]=a[i];
i++;
k++;
}
};
for(k=lb;k<=ub;k++)
{
a[k]=b[k];
}
};




















