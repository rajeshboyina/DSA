//Given an Unidirected graph and integer M,check graph can be colored with almost M colors
//No two adjcent vertices of graph are colored with same color
//color graphs means assignment of colors to all vertices
#include<iostream>
using namespace std;
bool safe(int node,int color[],bool graph[101][101],int n, int col)
{
    for(int k=0;k<n;k++)
    {
        if(k!=node && graph[k][node]==1&&color[k]==col) return false;
    }
    return true;
}
bool solve(int node,int color[],int m,int N,bool graph[101][101])
{
    if(node==N)
    return true;
    for(int i=1;i<=m;i++)
    {
        if(safe(node,color,graph,N,i))
        {
            color[node]=i;
            if(solve(node+1,color,m,N,graph)) return true;
            color[node]=0;
        }
    }
    return false;
    
}
bool graphColoring(bool graph[101][101],int M,int N)
{
    int color[N]={0};
    if(solve(0,color,M,N,graph)) return true;
    return false;
}
int main() {
    // Example: A triangle graph (3 nodes all connected to each other)
    int N = 4; // Number of vertices
    int M = 3; // Max number of colors

    bool graph[101][101] = {0};

    // Define edges of the undirected graph
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[1][2] = 1;
    graph[2][1] = 1;

    graph[2][3] = 1;
    graph[3][2] = 1;

    graph[3][0]=1;
    graph[0][3]=1;

    graph[0][2]=1;
    graph[2][0]=1;

    if(graphColoring(graph, M, N))
        cout << "Graph can be colored with " << M << " colors.\n";
    else
        cout << "Graph cannot be colored with " << M << " colors.\n";

    return 0;
}