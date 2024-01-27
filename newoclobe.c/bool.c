#include<stdio.h>
#include<stdbool.h>

    bool linearSearch(int arr[] , int n){
        int x;
        scanf("%d" , &x);
        for (int i = 0; i < n ; i++) if (arr[i] == x) return true;
        return false;


    }
    int main(){
        int n ;
        scanf("%d",&n);
        int arr[n];
        for (int i=0; i<n;i++){
            scanf("%d",&arr[i]);
        }
        if (linearSearch(arr,n)) printf("YES");
        else printf("NO");
        return 0;
    }
    
    
    
    
    
    
   