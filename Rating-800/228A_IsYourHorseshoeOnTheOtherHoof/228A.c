#include <stdio.h>

int main()
{
    int str[4];
    for(int i=0;i<4;i++){
        scanf("%d",&str[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(str[i]==str[j]){
                str[j]=-1;
            }
        }
    }
    int c=0;
    for(int i=0;i<4;i++){
        if(str[i]!=-1){
            c++;
        }
    }
    printf("%d",4-c);
    return 0;
}
