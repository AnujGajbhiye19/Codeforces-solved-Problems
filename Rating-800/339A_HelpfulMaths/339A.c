#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    scanf("%s",str);
    for(int i=0; i< strlen(str); i=i+2){
        for(int j=i+2; j< strlen(str); j=j+2){
            if(str[i] > str[j]){
                char t = str[j];
                str[j] = str[i];
                str[i] = t;
            }
        }
    }
    printf("%s", str);
    return 0;
}
