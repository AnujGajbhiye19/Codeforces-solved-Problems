#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<k ;i++){
        if(n==0){
            break;
        }
        else if(n%10==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
    }
    printf("%d", n);
    
    return 0;
}
