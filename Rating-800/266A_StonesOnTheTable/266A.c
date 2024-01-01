#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    scanf("%d", &len);
    char str[len];
    scanf("%s",str);
    int c=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]==str[i+1]){
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
