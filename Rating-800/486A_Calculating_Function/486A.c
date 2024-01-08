#include <stdio.h>

int main()
{
    long long n, ans=0;
    scanf("%lld",&n);
    if(n%2==0){
        ans=n/2;
    }
    else{
        ans=(n/2)-n;
    }
    printf("%lld",ans);
    
    return 0;
}
