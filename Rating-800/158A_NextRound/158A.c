#include<iostream>
using namespace std;
int main(){
    int n,k,a[50],c=0,i;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i++){
        if((a[i]>=a[k-1]) && (a[i]>0))
        //cout<<a[i]<<" >= "<<a[k-1]<<" "<<k-1<<endl;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
