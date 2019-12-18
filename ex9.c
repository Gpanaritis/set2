#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
 };
 struct node *start=NULL,**in;
 void Insert1(struct node **headRef, int newData);
 void Insert2(struct node **headRef, int newData);
 int Delete(struct node **headRef);
 int GetNth(struct node *head , int index);
 int Count(struct node *head , int searchFor);
int main()
{
struct node*head,**del;
int a=0,ret,newData;
in=&start;
while (a!=5)
{
    head=start;
    if (start==NULL)
        {
            do{
            printf("1.Insert\n5.exit\n");
            scanf("%d",&a);
            }while (a!=1 && a!=5);
            if (a==1)
            {
                printf("Give new data\n");
                scanf("%d",&newData);
                Insert(newData);
            }
        }
    else
    {
          do{
            printf("1.Insert\n2.Delete\n3.Get-Nth\n4.Count\n5.exit\n");
            scanf("%d",&a);
            }while (a<1 || a>5);

         if (a==1)
            {
                printf("Give new data\n");
                scanf("%d",&newData);
                Insert(newData);
            }
         else if (a==2)
         {
            del=&(start->next);
            ret=Delete(del);
            printf("You deleted 1st line with data=%d\n",ret);
         }
         else if(a==3)
            {
                printf("Give the number you want to shearch for the integer\n");
                scanf("%d",&newData);
                ret=GetNth(head,newData);
                printf("In place %d the value is %d\n",newData,ret);
            }
         else if (a==4)
         {
             printf("Give the value you want to search for\n");
             scanf("%d",&newData);
             ret=Count(head,newData);
             printf("The value %d was found %d times\n",newData,ret);
         }
    }
}
return 0;
}

void Insert(int newData)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=newData;
    new_node->next=NULL;
    *in=new_node;
    (in)=&(new_node->next);
}


int Delete(struct node **headRef)
{
    int a;
    struct node *temp;
    temp=start;
    a=start->data;
    start=start->next;
    free(temp);
    return a;
}

int GetNth(struct node *head , int index)
{
    int i,a;
    for (i=0;i<index;i++)
    {
      if (head==NULL)
          break;
      head=head->next;
    }
    if (head==NULL)
        a="";
    else
        a=head->data;
    return a;
}

int Count(struct node *head , int searchFor)
{
    int count=0;
    while(head!=NULL)
    {
        if (searchFor==head->data)
          count++;
        head=head->next;
    }
    return count;
}
