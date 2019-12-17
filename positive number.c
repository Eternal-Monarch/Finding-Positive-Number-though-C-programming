#include<stdio.h>
int
main ()
{
  int a;
  printf ("Enter the digit\n");
  scanf ("%d", &a);
  {
    if (a > 0 || a == 0)
      {
	printf ("%d is a positive number\n", a);
      }

    else
      {
	printf ("%d is not a positive number", a);
      }
  }

  return 0;

}

