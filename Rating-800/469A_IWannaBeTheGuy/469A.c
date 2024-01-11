#include <stdio.h>

int main()
{
    int n,p,q;
    scanf("%d %d",&n, &p);
    int x[p];
    for(int i=0;i<p;i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &q);
    int y[q],a[n];
    for(int i=0;i<q;i++){
        scanf("%d", &y[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(a[j]==x[i]){
                a[j]=-1;
                break;
            }
        }
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(a[j]==y[i]){
                a[j]=-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    
    return 0;
}
