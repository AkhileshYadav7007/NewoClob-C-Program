#include<stdio.h>
#include<string.h>
int main(){
    char str [50];
    printf("Enter a Lover Char & Upper Charj : ");
    scanf("%s" , str);
    int n = strlen(str);
    for(int i=0;i<=n; i++){
    if (str[i] > 97 && str[i]<= 122){
        str [i] = str [i] - 32;
    }


    }
    printf("%s", str);
    for (int i = 0 ; i <= n ; i++){
        if (str[i]> 65 && str[i] <90){
            str [i] = 32;

        }
    }
    printf("%s", str );


    









    return 0;
}