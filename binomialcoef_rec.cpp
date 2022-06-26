#include<bits/stdc++.h>
using namespace std;
int binomial(int n,int r){
    if(r==0||n==r) return 1;
    return binomial(n-1,r-1)+binomial(n-1,r);
}
int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    cout<<binomial(n,r);
}