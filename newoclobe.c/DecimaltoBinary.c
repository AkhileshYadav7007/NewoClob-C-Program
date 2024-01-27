#include<stdio.h>
void main(){

    int d, b[20], i, j;
    printf("Enter Decimal Number : ");
    scanf("%d", &d);

    i = 0;

    while (d > 0)
    {
        b [i] = d % 2;
        d = d/2;
        i++;

    }
    printf("Binary Equivalent : ");
    for (j = i-1; j > = 0; --j);
    printf("%d", b[j]);
    getch ();

}
    
    



















}