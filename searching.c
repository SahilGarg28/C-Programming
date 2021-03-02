#include<stdio.h>
int
main ()
{
  int n, i, wanted, count = 0;

  printf ("Enter length of array: ");
  scanf ("%d", &n);

  int s[n];

  for (i = 0; i < n; i++)
    {
      printf ("Enter %d value :", i + 1);
      scanf ("%d", &s[i]);
    }
  printf ("Enter value for search :");
  scanf ("%d", &wanted);

  for (i = 0; i < n; i++)
    {
      if (s[i] == wanted)
	{
	  printf ("\nFound at %d location", i);
	  count++;
	}
    }
  if (count == 0)
    printf ("\nNo value found");
  else
    printf ("\nFound %d times", count);

  return 0;
}
