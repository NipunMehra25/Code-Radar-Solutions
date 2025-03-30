#include<stdio.h>

int sort(int arr[] ,int n){
    int dup[n];
    for(int i = 0 ; i < n ; i++){
        dup[i] = arr[i];
    }

    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        int flag = 1;
        if(arr[i] != dub[i]){
            flag = 0
            break;
        }
        return flag;
    }
}
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    sort(arr , n) ? printf("Sorted") : printf("Not Sorted") ;


}