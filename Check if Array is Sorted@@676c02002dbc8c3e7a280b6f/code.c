#include<stdio.h>

int sort(int arr[] ,int n){
    int dup[n];
    for(int i = 0 ; i < n ; i++){
        dup[i] = arr[i];
    }

    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n - i -1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != dup[i]){
            return 0 ;
        }
    }
    return 1;
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