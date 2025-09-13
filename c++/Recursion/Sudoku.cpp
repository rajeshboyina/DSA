#include<iostream>
#include<vector>
using namespace std;
bool IsValid(vector<vector<char>> &board,int row,int col,char c)
{
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==c) return false;
        if(board[i][col]==c) return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false ;
    }
    return true;
}
bool solve(vector<vector<char>> &board)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            if(board[i][j]=='_')
            {
                for(char c='1';c<='9';c++)
                {
                    if(IsValid(board,i,j,c))
                    {
                        board[i][j]=c;
                        if(solve(board))
                        return true;
                        else
                        board[i][j]='_';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<char>> board = {
        {'5','3','_','_','7','_','_','_','_'},
        {'6','_','_','1','9','5','_','_','_'},
        {'_','9','8','_','_','_','_','6','_'},
        {'8','_','_','_','6','_','_','_','3'},
        {'4','_','_','8','_','3','_','_','1'},
        {'7','_','_','_','2','_','_','_','6'},
        {'_','6','_','_','_','_','2','8','_'},
        {'_','_','_','4','1','9','_','_','5'},
        {'_','_','_','_','8','_','_','7','9'}
    };

    if (solve(board))
    {
        cout << "Solved Sudoku board:\n";
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists for the given Sudoku puzzle." << endl;
    }

    return 0;
}
