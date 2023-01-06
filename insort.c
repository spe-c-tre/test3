#include<stdio.h>
int main()
{
int n,a[20],i,temp,j;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(temp<a[j]&&j>=0)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
printf("sorted array elements are:");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}

