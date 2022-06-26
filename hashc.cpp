#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
void solve() {
    int x,y,no_of_skills;
    vector<pair<string,int>> skills;
    string name;
    cin>>x>>y;
    map<string,vector<pair<string,int>>> inp;
    for(int i=0;i<x;++i){
        cin>>name>>no_of_skills;
        for(int j=0;j<no_of_skills;++j){
            string skl;
            int lev;
            cin>>skl>>lev;
            // skills.push_back(make_pair(skl,lev));
            inp[name].push_back(make_pair(skl,lev));
        }
        
    }
for(auto it=inp.begin();it!=inp.end();++it){
    cout<<it->first<<" ";
    cout<<it->second.size();
    for(auto ift:it->second){
        
        cout<<ift.first<<" "<<ift.second<<endl;
    }
}
map<map<string,vector<int>>,vector<pair<string,int>>> work;
for(int i=0;i<y;++i){
    string project;
    vector<int> vals;
    cin>>project;
    for(int j=0,val=0;j<4;++j){
        cin>>val;
        vals.pb(val);
    }
    vector<pair<string,int>> req;
    for(int i=0;i<vals[3];++i){
        string skill;
        int lev;
        cin>>skill>>lev;
        req.pb(make_pair(skill,lev));
    }

}

// map<map<string,vector<int>>,pair<string,int>>projects;
// for(int i=0;i<y;++i){

// }



}
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());

solve();


return 0;
}