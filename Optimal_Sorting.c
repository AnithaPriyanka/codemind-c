#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n], i;
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        int j, x=0, c=0, s;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                    c++;
                }
            }
        }
        if(c==0){
            printf("0");
        }
        else {
            s=a[n-1]-a[0];
            printf("%d
", s);
        }
    }
}