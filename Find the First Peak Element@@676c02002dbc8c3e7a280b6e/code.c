#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            if(arr[0] > arr[1]){
                printf("%d",arr[0]);
                break;
            }
        else if(i != 0){
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                printf("%d",arr[i]);
                break;
            }
        }
        else{
            printf("-1");
        }
        }
    }
}