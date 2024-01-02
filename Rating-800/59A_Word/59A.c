#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    int u=0, l=0;
    scanf("%s",str);
    for(int i=0; i< strlen(str); i++){
        if(str[i]>64 && str[i]<91){
            u++;
        }
        else if(str[i]>96 && str[i]<123){
            l++;
        }
    }
    if(u>l){
        for(int i=0; i<strlen(str); i++){
            printf("%c",toupper(str[i]));
        }
    }
    else{
        for(int i=0; i<strlen(str); i++){
            printf("%c",tolower(str[i]));
        }
    }
    
    return 0;
}
