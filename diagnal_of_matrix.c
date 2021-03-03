#include <stdio.h>

int
main ()
{
  int n, r, c;
  printf ("Enter n :");
  scanf ("%d", &n);

  int A[n][n];

  for (r = 0; r < n; r++)
    {
      for (c = 0; c < n; c++)
	{
	  printf ("Enter value at A[%d][%d] :", r, c);
	  scanf ("%d", &A[r][c]);
	}
    }

  for (r = 0; r < n; r++)
    {
      for (c = 0; c < n; c++)
	{
	  if (r == c)
	    printf ("%d\t", A[r][c]);
	  else
	    printf ("0\t");
	}
      printf ("\n");
    }

  return 0;
}
