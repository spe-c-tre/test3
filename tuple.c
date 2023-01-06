#include<stdio.h>
void sparse(int a[10][10],int m,int n)
{
 int i,j,k=1,s[10][10];
 s[0][0]=m;
 s[0][1]=n;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]!=0)
   {
    s[k][0]=i;
    s[k][1]=j;
    s[k][2]=a[i][j];
    k++;
   }
  }
 }
 s[0][2]=k-1;
 printf("\n Tuple form \n");
 for(i=0;i<=s[0][2];i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",s[i][j]);
  }
  printf("\n");
 }
}
void main()
{
 int a[10][10],i,j,n,m;
 printf("\nEnter the number of rows and coloums :\n");
 scanf("%d%d",&m,&n);
 printf("\nEnter the elements :\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nThe input matrix is :\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 sparse(a,m,n);
}
