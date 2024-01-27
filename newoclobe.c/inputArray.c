#include<stdio.h>

void main(){
    int a  [100], i, n;
    printf("input Range ");
    scanf("%d", &n);
    for (i = 0; i < n; i++);
    {
        printf("input element ");
        scanf("%d", &a[i]);

    }
    printf("Elements Are : ");
    for (i = 0; i<n; i++ )
    printf("%d\n", a[i]);
    getch ();
}