#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int p=0;
    for(int i=1; i<=w; i++){
        p += (i*k); 
    }
    printf("%d\n", p>n? p-n: 0);
    return 0;
}
