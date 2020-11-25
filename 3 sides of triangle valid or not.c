#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c,n;
    printf("\n enter the three angles: ");
    scanf("\n %d%d%d", &a, &b, &c);
    n=a+b+c;

    if( n == 180)
    {
        printf("\n valid angles");
    }
     else
     {
         printf("\n not valid angles");
     }
     return 0;
}
