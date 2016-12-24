#include <stdio.h>

int main()
{
    int n,k,i;
    scanf("%d %d", &n ,&k);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count =0;
    for(i=0; i<n; i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    printf("%d", count);
}
