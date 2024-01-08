#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101], str2[101];
    scanf("%s %s", str1,str2);
    for(int i=0; i<strlen(str1); i++){
        if(str1[i]==str2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }

    return 0;
}
