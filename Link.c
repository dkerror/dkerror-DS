#include<stdio.h>
#include<stdlib.h>
typedef STRUCT NODE
{
  int data;struct NODE *ptr;
}NODE;

create Node()
{
  NODE *n= NODE * malloc(sizeof(NODE));
  N->data=NULL;
  N->ptr=NULL;
  return n;
}
