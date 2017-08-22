#include<stdio.h>
#include"Stack.h"
#define max 3
int n;
STACK src;
STACK spr;
STACK desc;
int i=0;

int main()
{
  printf("Enter the number of rings\n");
  scanf("%d\n",&n);
  while (i<=max){push(&src,max-i);i++;}
  display(&src);
  //TOH(n,src,spr,dest);
  printf("Finished\n");
  return 0;
}

int TOH(int n,int src,int spr,int dest)
{
  if(n==1){push(&dest,pop(&src);}
  return 0;
}
