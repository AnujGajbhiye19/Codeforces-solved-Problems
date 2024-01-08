#include <stdio.h>

int main()
{
    int n,c=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i!=0){
            if(arr[i]!=arr[i-1]){
                c++;
            }
        }
    }
    printf("%d\n", c);
    
    return 0;
}
