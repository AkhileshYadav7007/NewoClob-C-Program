#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n; i++) scanf("%d",&arr[i]);
    for(int i=0 ; i<n; i++) printf("%d",&arr[i]);
    int counter =0;
    int idx = -1;
    int x;
    scanf("%d",&x);
    for(int i =0; i<n; i++){
        if (arr[i] ==x){
            counter +=1;
            break;
        }
    }
    if(counter ==1) printf("Enter is Persent on index %d",idx);
    else printf("Enter is Not  Persent");




    return 0;
}