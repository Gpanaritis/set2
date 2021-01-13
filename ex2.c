#include <stdio.h>
#define n 100

int main()
{
  char a[n];
  int i,count,num[14],j;
  for (i=0;i<14;i++) num[i]=0;
  i=0;
  printf("give your sentence\n");
  gets(a);
  puts(a);
  while ((int)a[i]!=0)
  {
    count=0;
    if (!(((int)a[i]>=65 && (int)a[i]<=90)|| ((int)a[i]>=97 && (int)a[i]<=122)))
    i++;
    while (((int)a[i]>=65 && (int)a[i]<=90)|| ((int)a[i]>=97 && (int)a[i]<=122))
    {count++; i++;}
    num[count]++;
    if (i>n) break;
  }
  printf("Word Length   |Number of Occurences\n");
  for (i=1;i<10;i++) {printf("\n%d             |",i,num[i]); for (j=1;j<=num[i];j++) printf("*");}
  for (i=10;i<14;i++){printf("\n%d            |",i,num[i]); for (j=1;j<=num[i];j++) printf("*");}
  return 0;
}
