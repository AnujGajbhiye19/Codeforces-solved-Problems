#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    int arr[s][2];
    int max=0, sum=0;
    for(int i=0;i<s;i++){
        for(int j=0; j<2;j++){
            scanf("%d", &arr[i][j]);
        }
        sum = (sum - arr[i][0]) + arr[i][1];
        if(sum>max){
            max=sum;
        }
    }
    printf("%d\n",max);

    return 0;
}
