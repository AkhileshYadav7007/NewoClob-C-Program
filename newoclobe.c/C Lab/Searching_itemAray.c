#include<stdio.h>
#include<stdlib.h>
int main(){
    int item ,i = 1;
    int a[5] = {34 ,56, 32, 75, 12};
    printf("Enter your Searching Items : ");
    scanf("%d", &item);
    while (i< 5)

    {
        if (a [i] == item){
            printf("Item Found at %d",i);
            exit(1);


        }
        ++i;

    }
    if (i>=5)
    {
        printf("Item Not Found");
        exit(0);
    }
    
    
      return 0;

}