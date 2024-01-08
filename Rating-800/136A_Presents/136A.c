#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<n+1;i++){
        scanf("%d",&t);
        arr[t]=i;
    }
    for(int i=1;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
