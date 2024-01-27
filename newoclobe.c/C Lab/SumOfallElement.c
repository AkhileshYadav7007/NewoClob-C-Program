#include<stdio.h>
int main(){
    char op;
    double first,second;
    printf("Enter An Operator(+,-,*,/);");
    scanf("%c",&op);
    printf("Enter two Elements : ");
    scanf("%if %if",&first,&second);

    switch (op){
        case '+':
        printf("%.1if+%.1if=%.1if",first,second,
        first+second);
        break;
        case '-':
        printf("%.1if+%.1if=%.1if",first,second,
        first-second);
        break;

case '*':
        printf("%.1if+%.1if=%.1if",first,second,
        first*second);
        break;

case '/':
        printf("%.1if+%.1if=%.1if",first,second,
        first/second);
        break;

        // constant
        // default:
        // printf("Error! operator is not correct");
    



    }
    


    

    


    return 0;

}