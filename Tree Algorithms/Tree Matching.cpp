// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> matched;
int ans=0;
void dfs(int node,int parent){
    for(auto child:adj[node]){
        if(child==parent) continue;
        dfs(child,node);
        if(!matched[child] && !matched[node]){
            matched[child] = true;
            matched[node] = true;
            ans++;
        }
    }
}
int main() {
    int n;
    cin>>n;
    adj.resize(n+1);
    matched.resize(n+1,false);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }dfs(1,-1);
    cout<<ans;

    return 0;
}