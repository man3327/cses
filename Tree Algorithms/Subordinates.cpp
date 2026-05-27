// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> ans;
int dfs(int node){
    int sub=1;
    for(auto &p:adj[node]){
        sub+=dfs(p);
    }
    ans[node]=sub-1;
    return sub;
}
int main() {
 
  int n;
  cin>>n;
  adj.resize(n+1);
  ans.resize(n+1);
   for(int i=2;i<=n;i+=1){
       int val;
       cin>>val;
       adj[val].push_back(i);
   }
   dfs(1);
   for(int i=1;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
   

    return 0;
}