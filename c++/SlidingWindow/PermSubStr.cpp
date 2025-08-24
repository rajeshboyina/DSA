/*
Check if Permutation of Pattern is Substring
Given two strings txt and pat having lowercase letters, the task is to check if any permutation of pat is a substring of txt.

Examples:

Input: txt = "geeks", pat = "eke"
Output: true
Explanation: "eek" is a permutation of "eke" which exists in "geeks".

Input: txt = "programming", pat = "rain"
Output: false
Explanation: No permutation of "rain" exists as a substring in "programming".
*/
#include<iostream>
#include<vector>
using namespace std;
const int Max_char=26;
bool check(vector<int> &freq)
{
    for (auto i: freq)
    if(i) return false;
    return true;
}
bool Search(string &txt,string &pat)
{
    int n=pat.size();
    int m=txt.size();
    vector<int> freq(Max_char,0);
    for(int i=0;i<n;i++)
    {
        freq[txt[i]-'a']++;
        freq[pat[i]-'a']--;
    }
    if(check(freq))
    return true;
    for(int i=n;i<m;i++)
    {
        freq[txt[i]-'a']++;
        freq[txt[i-n]-'a']--;
        if(check(freq))
        return true;
    }
    return false;
}
int main()
{
    string txt,pat;
    cout<<"Enter txt:";
    cin>> txt;
    cout<<"Enter pat:";
    cin>>pat;
    if(Search(txt,pat))
    cout<<"true";   
    else
    cout<<"false";
    return 0;
}