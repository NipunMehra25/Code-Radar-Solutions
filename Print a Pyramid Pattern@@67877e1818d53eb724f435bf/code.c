#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
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
}