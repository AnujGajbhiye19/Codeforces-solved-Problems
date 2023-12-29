#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char s[1000];
    cin>>t;
    while(t!=0){
        cin>>s;
        int n=strlen(s);
        if(n>10)
        cout<<s[0]<<n-2<<s[n-1]<<endl;
        else
        cout<<s<<endl;
        t--;
    }
    return 0;
}
