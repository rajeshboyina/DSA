//#include<iostream>
//#include<vector>
//using namespace std;
//void making(vector<vector<int> > arr,int m,int n,int i,int j)
//{
//	for(int k=0;k<n;k++)
//	{
//		if (arr[i][k]!=0)
//		arr[i][k]=-1;
//	}
//	for(int k=0;k<m;k++)
//	{
//		if (arr[k][j]!=0)
//		arr[k][j]=-1;
//	}
//}
//int main(){
//	vector<vector<int> > arr[3][3]={1,0,1,0,1,0,1,1,1};
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			if (arr[i][j]==0)
//			making(*arr,3,3,i,j)
//		}
//	}
//	for(int i=0;i<3;i++)
//	for(int j=0;j<3;j++)
//	cout<<arr[i][j]<<" ";
//	cout<<endl;
//	
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int> > &matrix, int n, int m, int i) {
    // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int> > &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix, int n, int m) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int> > matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n"<<endl;;
    }
    return 0;
}


