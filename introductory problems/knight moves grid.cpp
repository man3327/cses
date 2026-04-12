#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n,-1));
    queue<pair<int,int>> q;
    vector<pair<int,int>> dist={{1,2},{2,1},{-2,1},{2,-1},
    {-1,2},{1,-2},{-1,-2},{-2,-1}};
    q.push({0,0});
    vec[0][0]=0;
    while(!q.empty()){
        auto &[i,j] = q.front();
        q.pop();
        for(auto &[dx,dy]: dist){
            int ni=dx+i;
            int nj=dy+j;
            if(ni>=0 && ni<n && nj>=0 && nj<n && vec[ni][nj]==-1){
                vec[ni][nj]=vec[i][j]+1;
                q.push({ni,nj});
            }
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}