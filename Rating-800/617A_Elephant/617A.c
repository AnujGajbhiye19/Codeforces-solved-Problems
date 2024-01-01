#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int c = 0;
    while(x!=0){
        if(x>=5){
            c = x/5;
            x %=5;
        }
        else{
            c++;
            x = 0;
        }
    }
    printf("%d\n", c);
    return 0;
}
