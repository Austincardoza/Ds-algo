#include<bits/stdc++.h>
using namespace std;
int catalan(int n){
    int res=0;
    if(n==0||n==1) return 1;
    for(int  i=0;i<n;++i){
        res+=catalan(i)*catalan(n-i-1);
    }
return res;
}
int main(){
    int n;
    cout<<"enter a term:"<<endl;
    cin>>n;
    cout<<catalan(n);
    return 0;
}