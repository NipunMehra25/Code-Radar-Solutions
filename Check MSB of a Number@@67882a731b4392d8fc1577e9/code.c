#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b = a << 31;
    a = b&1
    a == 1 ? printf("Set"):printf("Not Set");
    return 0;
}