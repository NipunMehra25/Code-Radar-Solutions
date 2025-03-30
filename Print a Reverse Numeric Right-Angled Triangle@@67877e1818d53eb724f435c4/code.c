#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int a = 1;
        for(int k = 0 ; k < n-i ; k++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}