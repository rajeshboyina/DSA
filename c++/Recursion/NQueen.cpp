//https://www.youtube.com/watch?v=i05Ju7AftcM&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9
#include<iostream>
#include<vector>
using namespace std;
bool safe(int row,int col,vector<string> & board,int n)
{
    //as we are adding from left to right and placing one queen at a time in col
    //things we need to consider are left-side,left-upper diag,left lower dia
    //for upper
    int duprow=row;
    int dupcol=col;
    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
    row=duprow;
    col=dupcol;
    //left side
    while(col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;
    }
    //for lower dia
    col=dupcol;
    while(row<n && col>=0)
    {
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }
    return true;
}
void solve(vector<string> board,vector<vector<string>> &ans,int col,int n)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(safe(row,col,board,n))
        {
        board[row][col]='Q';
        solve(board,ans,col+1,n);
        board[row][col]='.';
        }
    }
}
vector<vector<string>> NQueen(int n)
{
    vector<vector<string>> ans;
    vector<string> board;
    string line(n,'.');
    for(int i=0;i<n;i++)
    board.push_back(line);
    solve(board,ans,0,n);
    return ans;
}
void Optisolve(vector<vector<string>> &ans,vector<string> & board,int col,vector<bool> &UpperDia,vector<bool> &LowerDia,vector<bool> &LeftRow,int n)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(!UpperDia[row+col] && !LowerDia[n-1+col-row]&& !LeftRow[row])
        {
            UpperDia[row+col]=true;
            LowerDia[n-1+col-row]=true;
            LeftRow[row]=true;
            board[row][col]='Q';
            Optisolve(ans,board,col+1,UpperDia,LowerDia,LeftRow,n);
            UpperDia[row+col]=false;
            LowerDia[n-1+col-row]=false;
            LeftRow[row]=false;
            board[row][col]='_';
        }
    }
}
vector<vector<string>> OptimizedNQueen(int n)
{
    vector<vector<string>> ans;
    vector<string> board;
    string line(n,'_');
    for(int i=0;i<n;i++) board.push_back(line);
    vector<bool> UpperDia(2*n-1,0),LowerDia(2*n-1,0),Row(n,0);
    Optisolve(ans,board,0,UpperDia,LowerDia,Row,n);
    return ans;
}
int main()
{
    int n,c=1;
    cin>>n;
    vector<vector<string>> ans;
    ans=NQueen(n);
    //ans=OptimizedNQueen(n);
    for(auto i: ans)
    {
        cout<<"sol-"<<c++<<endl;
        for(auto j:i)
        {
            for(auto k:j)
            cout<<" "<<k;
            cout<<endl;
        }
    }
}