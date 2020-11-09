#include <stdio.h>
#include <conio.h>

void main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x>0)
        printf("Positive Number");
    else if(x<0)
        printf("Negative Number");
getch();
}
