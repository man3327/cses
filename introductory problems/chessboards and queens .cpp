#include <bits/stdc++.h>
using namespace std;
bool canplace(int n,int col,int row,vector<string>& board){
    if(board[row][col]=='*') return false;
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q') return false;
    }for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){
        if(board[i][j]=='Q') return false;
    }for(int i=row,j=col;i>=0 && j<n ;i--,j++){
        if(board[i][j]=='Q') return false;
    }
    return true;
}
void solve(int n,vector<string>& board,int row,int &ans){
    if(row==n){
        ans++;
        return;
        
    }
    for(int i=0;i<8;i++){
        if(canplace(n,i,row,board)){
            board[row][i]='Q';
            solve(n,board,row+1,ans);
            board[row][i]='.';
        }
    }
}
int main() {
     vector<string> board(8);
    for(int i = 0; i < 8; i++){
        cin >> board[i];
    }int n=8;
    int ans=0;
    solve(n,board,0,ans);
    cout<<ans;

    return 0;
}