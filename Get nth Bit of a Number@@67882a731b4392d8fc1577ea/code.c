#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&c);
    b = a >> c;
    a = b&1;
    printf("%d",a);
    return 0;
}