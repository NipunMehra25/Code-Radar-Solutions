#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0; i < n-1; i++){
        for(int k = 0 ; k < n-i-1 ; k++){
            printf(" ");
        }
        for(int j = 0 ; j < i+1 ; j++){
            printf("*");
        }
        for(int l = 0; l < i; l++){
            printf("*");
        }
        printf("\n");
    }
    for(int p = 0 ; p < n ; p++){
        for(int k = 0 ; k < p ; k++){
            printf(" ");
        }
        for(int j = 0 ; j < n-p ; j++){
            printf("*");
        }
        for(int l = 0; l < n-p-1; l++){
            printf("*");
        }
        printf("\n");
    }
}