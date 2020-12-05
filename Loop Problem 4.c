#include <stdio.h>
#include <conio.h>

void main()
{
    int q, w, spc, rows, e, r = 1;
    printf("Input a number of rows: ");
    scanf("%d", &rows);
    spc = rows + 4 - 1;
    for(q = 1; q <= rows; q++)
    {
        for(e=spc; e>=1; e--)
        {
            printf(" ");
        }
            for(w = 1; w <= q; w++)
            printf("%d ", r++);
        printf("\n");
        spc--;
    }

    getch();
    return 0;
}
