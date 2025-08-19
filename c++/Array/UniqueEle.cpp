#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int Xor(vector<int> arr)
{
    int t=0;
    for(auto i:arr)
        t^=i;
    return t;
}
int HashSet(vector<int> arr)
{
    unordered_set<int> Set;
    for( auto i:arr)
    {
        if(Set.find(i)!=Set.end())
            Set.erase(i);
        else
            Set.insert(i);
    }
    for( auto i:Set )
        return i;

}
int main()
{
    vector<int> arr={1,2,3,2,1};
    cout<<Xor(arr);
    cout<<HashSet(arr);
    return 0;
}