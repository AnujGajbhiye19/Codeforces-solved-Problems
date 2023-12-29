#include<iostream>
using namespace std;
int main(){
    int p, count=0;
    cin>>p;
    while(p!=0){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum>1)
        count++;
        
        p--;
    }
    cout<<count<<endl;
    return 0;
}
