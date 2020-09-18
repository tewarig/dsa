
#include <stdio.h>
#define Max 10
int
insert (int Queue[], int max, int Front, int rear)
{
  if ((rear + 1) % max == Front)
    {
      printf ("Queue is full! \n");
    }
  else
    {
      printf ("Enter element you want to input \n");
      rear = (rear + 1) % Max;
      scanf ("%d", &Queue[rear]);
    }
  return rear;
}

int
delete (int Queue[], int max, int Front, int rear)
{
  if (Front == -1)
    {
      printf ("Queue is Empty");
    }
  else if (Front == rear)
    {
      printf ("%d", Queue[Front]);
      Front = Front + 1;
      rear = rear + 1;
      printf ("deleted\n");
    }
  else
    {
      printf ("%d", Queue[Front]);
      printf (" deleted\n");
      Front = Front + 1;
    }
  return Front;
}

void
Display (int Queue[], int max, int Front, int rear)
{
  if (Front == -1)
    {
      printf ("Queue is Empty");
    }
  else
    {
      int temp = Front;
      while (temp != rear)
	{
	  printf ("%d", Queue[temp]);
	  temp = (temp + 1) % Max;
	}
    }
}

int
main ()
{
  int Queue[Max], Front = -1, rear = -1, ch;
  do
    {
      printf ("\n Menu \n 1 Insert \n 2 Serve \n 3 Display \n 4 exit \n");	// Menu
      printf ("\nEnter your choice \n");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  rear = insert (Queue, Max, Front, rear);
	  if (Front == -1)
	    {
	      Front++;
	    }
	  break;
	case 2:
	  Front = delete (Queue, Max, Front, rear);
	  break;
	case 3:
	  Display (Queue, Max, Front, rear);
	  break;
	}			// end of switch
    }
  while (ch != 4);		//End of while
  return 0;
}
