#include <stdio.h>

 

int main()
{
    int n,t,i;
    scanf("%d %d",&n,&t);
    char str[n];
    scanf("%s",str);

    while(t--){
        for(i=0;i<n;i++){
            if(str[i]=='B'&& str[i+1]=='G'){
                str[i]='G' ; 
                str[i+1]='B';
                i++;
            }
        }
    }
    printf("%s",str);

 

    return 0;
}
