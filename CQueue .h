#define MAX 10
#include <stdio.h>
int val;
  typedef struct{
  int data[MAX];
  int f,r;
  }QUEUE;
int init(QUEUE *q)
 {
  q->f=-1;
  q->r=-1;
  printf("Initialized\n");
  system("pause");system("cls");
  return 0;
 }
int insert(QUEUE *q)
  {
  if((q->f==0 && q->r==MAX-1)||(q->r==q->f-1)) {printf("Overflow \n");}
  else {
   if(q->f==-1 && q->r==-1) {q->f=0;q->r=0;}
   else if(q->r==MAX-1) {q->r=0;}
   else {q->r++;}
       }
  printf("Enter the value to be inserted: \n");
  scanf("%d",&val);
  q->data[q->r]=val;
  printf("Value inserted\n");
  }
int display(QUEUE *q)
  {
    int i;
  printf("\nDisplay\n");
  if(q->f!=-1 && q->r!=-1)
  {
    if(q->f<=q->r)
    {for(i=q->f;i<=q->r;i++){printf("%d ",q->data[i]);}}
    else
    {for(i=q->f;i<=MAX;i++;){printf("data[i]");}
     for(i=0;i<=q->r;i++;){printf("data[i]");}}
    }
  printf("\n");
  }
int del(QUEUE *q)
 {
 if (q->f==-1 && q->r==-1)
  {printf("Underflow\n");}
 else
 {val=q->data[q->f];
  if(q->f==q->r){q->f=-1;q->r=-1;}
  else if(q->f==MAX-1){q->f=0;}
  else{q->f++;}
  printf("%d\n",val);
  return 0;
 }
 }
int peak(QUEUE *q)
 {
  if (q->f==-1 && q->r==-1)
   {printf("Underflow\n");}
  else
  {
   val=q->data[q->f];
   printf("Front value is: %d\n",val);
  }
   return 0;
 }
int change(QUEUE *q)
 {
   int val,pos;
    printf("Enter the Position you want to change: \n");
    scanf("%d",&pos);
    printf("Enter the new Value: \n");
    scanf("%d",&val);
  if (q->f==-1 && q->r==-1)
    {}
  else{
    pos=pos+q->f-1;
    if (
        ((q->f<q-r && pos>=q->f && i<=q->r)||
         (pos>=q->f && pos<=q->r)||
        )
        {q->data[pos]=val;}
    else{printf("Error, Invalid values found.\n");}
      }
  else
    {printf("Invalid values found.\n");}
 }
