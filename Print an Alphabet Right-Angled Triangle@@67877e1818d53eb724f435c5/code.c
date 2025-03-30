#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int a = 65;
        for(int k = 0 ; k < i+1; k++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}