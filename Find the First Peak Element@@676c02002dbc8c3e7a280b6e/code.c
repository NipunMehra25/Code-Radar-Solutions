#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        int flag = 0;
        if(i != 0){
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                printf("%d",arr[i]);
                flag = 1;
                break;
            }
        }
        if(!flag){
            printf("-1");
        } 
        
    }
    }
}