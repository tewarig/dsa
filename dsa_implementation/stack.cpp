#include <stdio.h>
#define Max 10
int
push (int a[], int top)
{
  if (top == Max - 1)
    {
      printf ("Stack Overflow!");
    }
  else
    {
      printf ("Enter the no to be pushed\n");
      int no;
      scanf ("%d", &no);
      top += 1;
      a[top] = no;
    }
  return top;
}

int
pop (int a[], int top)
{
  if (top == -1)
    {
      printf ("Stack Underflow!");
    }
  else
    {
      printf ("%d\n", a[top]);
      top -= 1;
    }
  return top;
}

int
display (int a[], int top)
{
  if (top != -1)
    {
      int x = top;
      for (; x > -1; x--)
	{
	  printf ("%d ", a[x]);
	}
    }
  else
    {
      printf ("Stack is empty");
    }
}

int
peek (int a[], int top)
{
  if (top != -1)
    {
      printf ("%d", a[top]);
    }
  else
    {
      printf ("Stack is empty");
    }
}

int
main ()
{
  int stack[Max], top = -1, ch;
  int exit = 0;
  do
    {
      printf ("\nMenu \n1 push \n2 pop \n3 Display \n4 Peek \n5 Exit ");
      printf ("\nEnter your choice \n");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  top = push (stack, top);
	  break;
	case 2:
	  top = pop (stack, top);
	  break;
	case 3:
	  display (stack, top);
	  break;
	case 4:
	  peek (stack, top);
	  break;
	case 5:
	  exit = 1;
	  break;
	default:
	  printf ("Wrong choice entered");
	}
    }
  while (exit == 0);
}
