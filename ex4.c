#include <stdio.h>
#include<string.h>
#define N 5
#define M 30
typedef struct word_pair
{
  char word[M];
  int length;
} Word;
Word word_table[N];
void initialize(Word word_table[]);
int main()
{
 int i;
 for (i=0;i<N;i++)
   {printf("give %d word",i+1);
    scanf("%s",word_table[i].word);}
initialize( word_table);
for (i=0;i<N;i++)
    printf("Word %d is %s with length %d\n",i,word_table[i].word,word_table[i].length);
 return 0;
}

void initialize(Word word_table[])
{
  int i,count;
  for (i=0;i<N;i++)
  {
    count=0;
    while ((int)word_table[i].word[count] !=0)
        count++;
    word_table[i].length=count;
  }
  return;
}
