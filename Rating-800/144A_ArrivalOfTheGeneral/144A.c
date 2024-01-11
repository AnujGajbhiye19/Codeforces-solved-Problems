#include <stdio.h>

int main()
{
    int n, imx,imn,min=101,max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        if(t<=min){
            min=t;
            imn=i;
        }
        if(t>max){
            max=t;
            imx=i;
        }
    }
    int ans;
    if(imn<imx){
        imn++;
    }
    printf("%d",imx+n-1-imn);
    

    return 0;
}
