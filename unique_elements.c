#include<stdio.h>
int main(){
    int n, arr[n];
    scanf("%d", &n);
    int i, j;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            printf("%d ", arr[i]);
        }
    }
}