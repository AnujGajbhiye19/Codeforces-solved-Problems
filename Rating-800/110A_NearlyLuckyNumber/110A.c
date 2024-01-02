#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    int c=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            c++;
        }
        n/=10;
    }
    if(c==4 || c==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
