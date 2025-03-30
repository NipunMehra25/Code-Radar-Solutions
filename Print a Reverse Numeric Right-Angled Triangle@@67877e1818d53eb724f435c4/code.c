#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0; i < n-1; i++){
        int a = 1;
        for(int k = 0 ; k < n-i ; k++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}