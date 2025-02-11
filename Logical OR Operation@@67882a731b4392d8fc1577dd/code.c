#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a && b == -5){
        printf("False")
    } 
    else{
        a || b > 0 ? printf("True") : printf("False");
    }
    return 0;
}