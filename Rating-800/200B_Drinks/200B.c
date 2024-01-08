#include <stdio.h>

int main()
{
    int n;
    float add=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        add+=arr[i];
    }
    printf("%f\n",add/n);
    
    return 0;
}
