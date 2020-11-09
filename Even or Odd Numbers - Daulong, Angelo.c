#include <stdio.h>
#include <conio.h>

void main(){
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
if ((x%2)==0)
    printf("Entered number is Even");
else
    printf("Entered number is Odd");
getch();
}
