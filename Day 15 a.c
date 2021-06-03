Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int arr[30][30],i,j,m,n,p,sum =0;
  scanf("%d",&n);
  scanf("%d",&m);

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
  scanf("%d",&arr[i][j]);
}
}
  scanf("%d",&p);
 for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{

  if(p==arr[i][j])
{ 
printf("Element found at (%d,%d)\n",i,j);
  sum++;
}
}
}
if(sum==0)
 printf("Element not found ");
  


 
    return 0;
}
