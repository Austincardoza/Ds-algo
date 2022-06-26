#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);

}

int insertGraph(vector<int> adj[]){
     int val1,val2,cnt=0;
       while(val1!=-1||val2!=-1)
    {
        cout<<"Enter the vertices(x<->y) :";
        cin>>val1>>val2;
        cnt++;
        
        addEdge(adj,val1,val2);

    }return cnt;
}

void printGraph(vector<int> adj[],int cnt){
 for(int i=0;i<cnt;i++){
     cout<<i<<" ";
     for(auto v:adj[i]){
         cout<<"-> "<<v<<" ";
     }
     cout<<endl;
 }
}
int main(){
   
    vector<int> adj[1000];
    cout<<"Values can range from 0 to 1000"<<endl;
    int cnt=insertGraph(adj);
 
    printGraph(adj,cnt);
    return 0;
}