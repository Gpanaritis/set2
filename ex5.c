#include <stdio.h>
#include<stdlib.h>
#define N 7
void sort(int *x);
int main()
{
int i;
int*number=NULL;
number=(int*)malloc(N*sizeof(int));
for(i=0;i<N;i++)
 {
     printf("give %d number\n",i+1);
     scanf("%d",number+i);
 }
printf("\n");
sort(number);
for (i=0;i<N;i++)
  printf("%d\n",*(number+i));
return 0;
}

void sort(int *x)
{
int i,j,temp;
for (i=0;i<N;i++)
  {
  for (j=N-1;j>i+1;j--)
   {
    if (*(x+j)<*(x+j-1))
     { temp=*(x+j); *(x+j)=*(x+j-1); *(x+j-1)=temp;}
    }
  }
}

