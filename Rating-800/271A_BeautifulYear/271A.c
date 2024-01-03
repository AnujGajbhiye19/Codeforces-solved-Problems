#include <stdio.h>
int main()
{
    int n,s=0;
    scanf("%d", &n);
    int arr[4];
    while(1){
        int t=++n;
        int c=0;
        for(int i=3;i>=0;i--){
            arr[i]=t%10;
            t/=10;
        }
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(arr[i]==arr[j]){
                    break;
                }
                else{
                    c++;
                }
            }
        }
        if(c==6){
            break;
        }
    }
    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
