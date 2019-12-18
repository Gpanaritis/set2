#include<stdio.h>
#include<math.h>
int main()
{
 int i,n,j;
 printf("Give the amount of numbers you want to check for primes\n");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n-2;i++)
   a[i]=i+2;
 i=0;
 while(i+2<=sqrt(n))
 {
  if (a[i]!=1)
  {
   for(j=0;j<n;j++)
     if(a[j]!=a[i] && a[j]%a[i]==0)
       a[j]=1;
  }
   i++;
 }
 for(i=0;i<n-2;i++)
  if(a[i]!=1)
     printf("%d  ",a[i]);
 return 0;
}
