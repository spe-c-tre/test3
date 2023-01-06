#include<stdio.h>
int main()
{
int n,a[20],i,j,swap;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
if(min!=i)
{
swap=a[i];
a[i]=a[min];
a[min]=swap;
}
}
printf("sorted array elements are:");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
