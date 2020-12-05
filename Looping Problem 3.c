#include <stdio.h>
#include <conio.h>

void main()
{
 int days = 15;
 int cents = 10;

  for(int i = 1; i <= days; ++i)
  {
      printf("\nDays: %d\n\n", i);

      for(int j = 1; j <= cents; ++j)
      {
          printf("Cents: %d\n", j*2);
      }
  }
   getch();
   return 0;
}
