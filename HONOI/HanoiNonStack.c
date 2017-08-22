#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
int TOH(int n,STACK frm,STACK to,STACK use)
{
  int temp;
  if(n==1)
  {printf("%c to %c\n",frm,to);
  temp=pop(&frm);
  push(&to,temp);
  display(&frm);
  diplay(&to);}
  else
  {TOH(n-1,frm,use,to);
  printf("%c to %c \n",frm,to);
  TOH(n-1,use,to,frm);}
  return 0;
}

int main()
 {
   TOH(3,'A','C','B');
   return 0;
 }
