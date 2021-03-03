#include <stdio.h>

int main ()
{
  int class, student, r, c, max;

  printf ("Enter number of classes: ");
  scanf ("%d", &class);

  printf ("Enter number of students in each class: ");
  scanf ("%d", &student);

  int A[class][student];

  for (r = 0; r < class; r++)
    {
      printf ("\n-----------Class %d-----------\n\n", r + 1);
      for (c = 0; c < student; c++)
	{
	  printf ("enter marks of %d student: ", c + 1);
	  scanf ("%d", &A[r][c]);
	}
    }
    printf("\n");

  for (r = 0; r < class; r++)
    {
      max = A[r][0];
      for (c = 0; c < student; c++)
	{
	  printf ("%d\t", A[r][c]);
	  if (max < A[r][c])
	    max = A[r][c];
	}
      printf ("Maximum marks from class %d is = %d\n",r+1,max);
    }

  return 0;
}
