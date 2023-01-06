#include<stdio.h>
int main()
{
int n,a[20],i,key,low,high,mid;
printf("enter the limit");
scanf("%d",&n);
printf("enter the sorted array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search");
scanf("%d",&key);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
if(a[mid]<key)
{
low=mid+1;
}
else if(a[mid]==key)
{
printf("%d is found at %d th position",key,mid+1);
break;
}
else
{
high=mid-1;
}
mid=(low+high)/2;
}
if(low>high)
{
printf("element not found");
}
}

