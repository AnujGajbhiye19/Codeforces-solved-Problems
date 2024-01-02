#include <stdio.h>
#include <string.h>

int main()
{
    char stro[101];
    char strr[101];
    scanf("%s",stro);
    scanf("%s",strr);
    for(int i=0; i< strlen(strr)/2; i++){
        char t = strr[i];
        strr[i] = strr[strlen(strr)-i-1];
        strr[strlen(strr)-i-1] = t;
    }
    
    if(strcmp(stro, strr)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
