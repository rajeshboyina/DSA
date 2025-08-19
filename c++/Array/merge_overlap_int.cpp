#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>> arrays={{1,3},{2,4},{2,6},{7,8},{8,10},{13,16},{14,15}};
	sort(arrays.begin(),arrays.end());
	vector<vector<int>> ans;
	for(int i=0;i<arrays.size();i++)
    /*{
        int start=arrays[i][0];
        int ends=arrays[i][1];
        if(!ans.empty() && ends<=ans.back()[1])
        {
            continue;
        }
        for(int j=i+1;j<arrays.size();j++)
        {
            if(arrays[j][0]<=ends)
                ends=max(ends,arrays[j][1]);
            else
                break;
        }
        ans.push_back({start,ends});
    }*/
    for(int i=0;i<arrays.size();i++)
    {
        if (ans.empty()|| ans.back()[1]<arrays[i][0])
            ans.push_back(arrays[i]);
        else
            ans.back()[1]=max(ans.back()[1],arrays[i][1]);
    }
    for(auto i:ans)
    {
        cout<<i[0]<<" "<<i[1]<<endl;
    }
    return 0;
}
