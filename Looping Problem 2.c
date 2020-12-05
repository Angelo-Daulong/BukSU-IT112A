#include <stdio.h>
#include <conio.h>

int main()
{
    int firstvalue = 0, secondvalue = 0, biggervalue = 0,
    smallervalue = 0, sum = 0;
    printf("Enter a Value: ");
    scanf("%d", &firstvalue);
    printf("Enter a Value: ");
    scanf("%d", &secondvalue);

    if(firstvalue > secondvalue)
    {
        biggervalue = firstvalue;
        smallervalue = secondvalue;
    }
    else
    {
        biggervalue = secondvalue;
        smallervalue = firstvalue;
    }
    for(int x = smallervalue; x <= biggervalue; x++)
    {
        if(x%3 != 0)

        {
            printf("%d\n", x);
        sum = sum + x;
        }
    }

    getch();
    return 0;
}
