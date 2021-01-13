#include<stdio.h>

#define b 8

int main()
{
  int a[b],i,j,temp;
  for (i=0;i<b;i++)
    {
      printf("give number %d\n",i);
      scanf("%d",&a[i]);
    }
  for (i=0;i<b;i++)
  {
    for (j=b-1;j>=i+1;j--)
    {
      if (a[j]<a[j-1]) {temp=a[j]; a[j]=a[j-1];a[j-1]=temp;}
    }
  }
  temp=0;
  for (i=1;i<b;i++)
  {
    if (a[i]==a[i-1]) temp++;
  }
  printf("The number of repeats is %d",temp);
  
  return 0;
}

