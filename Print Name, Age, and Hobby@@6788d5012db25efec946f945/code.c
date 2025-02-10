#include <stdio.h>

int main() {
    int a;
    char b[100],c[100];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\n",b);
    printf("Age: %d\n",a);
    printf("Hobby: %s",c);

    return 0;
}