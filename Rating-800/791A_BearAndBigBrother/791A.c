#include <stdio.h>
int main()
{
    int l, b;
    scanf("%d %d", &l, &b);
    int c=0;
    while(l<=b){
        c++;
        l = l*3;
        b = b*2;
    }
    printf("%d\n",c);
    return 0;
}
