#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d %d",&n,&h);
    int arr[n], c=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        c += arr[i]/h;
        if(arr[i]%h>0){
            c++;
        }
    }
    printf("%d",c);

    return 0;
}
