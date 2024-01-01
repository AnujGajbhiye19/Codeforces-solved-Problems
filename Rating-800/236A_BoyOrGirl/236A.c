#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(str[i]>str[j]){
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    int c=1;
    char t = str[0];
    for(int i=1; i<len; i++){
        if(t != str[i]){
            c++;
            t = str[i];
            continue;
        }
    }
    
    if(c%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}
