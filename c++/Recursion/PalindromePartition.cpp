//given string S,Partition of S in such a way every partition of substring is also a palindrome
//Return all possible palindrome partitiing of s;
//palindrome string is same when we read in backwards
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
    private:
        bool IsPalindrome(string s,int start,int end)
        {
            while(start<end)
            {
                if(s[start++]!=s[end--]) return false;
            }
            return true;
        }
        void subsets(int ind,string s,vector<string> &path,vector<vector<string>> &res)
        {
            if(ind==s.size())
            {
            res.push_back(path);
            return ;
            }
            for(int i=ind;i<s.size();i++)
            {
                if(IsPalindrome(s,ind,i))
                {
                    path.push_back(s.substr(ind,i-ind+1));
                    subsets(i+1,s,path,res);
                    path.pop_back();
                }
            }
        }
        void Print(vector<vector<string>> ans)
        {
            for(auto i:ans)
            {
                for(auto j:i)
                cout<<j<<", ";
                cout<<endl;
            }
        }
    public:
        void partition(string s)
        {
            vector<vector<string>> res;
            vector<string> path;
            subsets(0,s,path,res);
            Print(res);
        }
};
int main()
{
    Solution s1;
    string st;
    cin>>st;
    s1.partition(st);
    return 0;

}