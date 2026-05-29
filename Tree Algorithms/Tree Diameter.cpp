#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int ans=0;
int dfs(int node,int parent){
    int max1=0;
    int max2=0;
    for(int child: adj[node]){
        if(parent==child) continue;
        int depth=dfs(child,node);
        if(depth>max1){
            max2=max1;
            max1=depth;
        }else if(depth>max2){
            max2=depth;
        }
    }ans=max(ans,max1+max2);
    return max1+1;
}
int main() {
    int n;
    cin>>n;
    adj.resize(n+1);
   
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }dfs(1,-1);
    cout<<ans;

    return 0;
}