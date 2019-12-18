#include <stdio.h>
#include <conio.h>

int main()
{
char a[20],b[20],c[20],w;
int i=0,count=0,flag=0,j;
printf("PLAYER 1: Please enter a word\n");
gets(a);
while ((int)a[i]!=0) {b[i]='_'; i++;}
b[i]=(char)0;
puts(a);
system("cls");
while(count<=7)
{
printf("You have %d wrong answers left\n",7-count);
flag=0;
letter:
 printf("give a letter\n%s\n",b);
 scanf(" %c",&w);
for (i=0;i<count;i++)
 {
 if((int)c[i]==(int)w)
  {
  printf("You have already used that letter");
  goto letter;
  }
 }
 for(i=0;i<20;i++) {if((int)a[i]==(int)w) {b[i]=w; flag=1;}}
 if (flag==0) {c[count]=w; count++;}
 i=0;
 j=0;
 while ((int)a[i]!=0) {if((int)a[i]==(int)b[i]) j++; i++;}
 if (j==i && i!=0) break;

 }
if (flag==0) printf("You lost, the word was %s",a);
else if (flag==1) printf("You won, the word is indeed %s",a);
return 0;
}





