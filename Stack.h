#define MAX 50
#include <stdio.h>
typedef struct
  {
        int top;
        int data[MAX];
  }STACK;
FILE *fp;
int init(STACK *s)
  {
    s->top = -1;
    int i;
    printf("%30s\b\b\b\bStack initialized \r");
    return(0);
  }
int push(STACK *s,int num)
  {
    //int num;
    if (s->top == (MAX - 1))
      {
        printf ("Stack is Full\n");
        return 0;
      }
    else
      {
        //printf ("Enter the element to be pushed \n");
        //scanf ("%d", &num);
        s->top++;
        s->data[s->top] = num;
        system("cls");
      }
    return 0;
}
int pop (STACK *s)
  {
    if (s->top == - 1)
      {
        printf ("Stack is Empty\n");
        return 0;
      }
    else
      {
        printf ("Popped element is = %d \n\n", s->data[s->top]);
        s->top = s->top - 1;
      }
    return 0;
}
int display (STACK *s)
  {
    int i;
    if (s->top == -1)
        {
            printf ("Stack is Empty \n");
            return 0;
        }
    else
        {
        printf ("\nThe status of the stack is: \n");
          for (i = s->top; i >= 0; --i)
            {
              printf ("%d \n", s->data[i]);
            }
          printf ("\n");
          return 0;
        }
}
int live(STACK *s)
  {
   int i;
   fp = fopen("H:/Atom/Stack.live", "w+");
   fprintf(fp, "");
   for (i = s->top; i >= 0; --i)
     {
         fprintf(fp, "%d\n", s->data[i]);
         fprintf(fp, "------\n");
     }
     fprintf(fp, "\n\n\n\n\n\n\n");
   fclose(fp);
   system("Powershell.exe -File H:/Atom/Live.ps1");
   return 0;
}
int peep(STACK *s)
  {
  if (s->top == - 1)
    {
      printf ("Stack is Empty\n");
      return 0;
    }
  else
    {
      printf ("Peeped element is = %d \n\n\n", s->data[s->top]);
      return 0;
    }
  }
int change(STACK *s)
  {
  int temp,pos,val;
  printf("Enter the position of Element to be altered: \n");
  scanf("%d",&pos);
  printf("Enter the value of the new Element: \n");
  scanf("%d",&val);
  printf("\n");
  system("cls");
  temp=s->top;
  s->top=pos-1;
  s->data[s->top]=val;
  s->top=temp;
  return 0;
  }
//STACK s;
//init(&s);
