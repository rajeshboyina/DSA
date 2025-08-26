// Remove Consecutive Duplicates from string
/*
Given a string s , The task is to remove all the consecutive duplicate characters of the string and return the resultant string. 
Examples: 
Input: s = "aaaaabbbbbb"
Output: ab
Explanation: Remove consecutive duplicate characters from a string s  such as 5 a's are at consecative so only write a and same like that in b's condition.

Input: s = "geeksforgeeks"
Output: geksforgeks
Explanation: Remove consecutive duplicate characters from a string s such as ee are their hence remove one e.

Input: s = "aabccba"
Output: abcba
Explanation: In this 2 a's are at consecutive so 1 a's remove after that 2 c's are consecutive so one c remove .
*/
#include<iostream>
#include<cstring>
using namespace std;
//Aproach1
/*
Idea is If the string is not empty compare the adjacent characters of the string. If they are the same then shift the characters one by one to the left. Call recursion on string s otherwise, call recursion from s+1 
*/
void Remove(char *s)
{
    if(s[0]=='\0' || s[1]=='\0')
    return;
    if(s[0]==s[1])
    {
        int i=0;
        while(s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
        Remove(s);
    }
    else
    Remove(s+1);
}
//Approach-2 linear traversal
/*
Idea is Iteratively traverses the string, appending characters to a new string only if they are different from the next character, thus removing consecutive duplicates.

Step by step approach:

Create a string to store the result
iterate the string from 0 to length-2
1) if current char is not equal to next char then add it to answer string
2) else continue
return string
*/
string Approach2(string s)
{
 int n=s.size();
 string res="";
 for(int i=0 ;i<n-1;i++)
 {
    if(s[i]!=s[i+1])
    res+=s[i];
 }
 res.push_back(s[n-1]);
 return res;
}
//Approach2 Sliding Window
/*
Idea is Initialize pointers i, j and now traverse with j, skip if s[i] == s[j], else append to new, then return the result

Step by step approach:

Initialize two pointer i, j and new string .
Traverse the string using j pointer .
Compare S[i] and S[j]
1) if both element are same then skip.
2) if both element are not same then append into new string set and slide over the window
After Traversing return result
*/
string Approach3(string s)
{
    //check string empty
    if(s.empty())
    return "";
    string res="";
    for(int i=0;i<s.length();i++)
    {
        if(res.empty()||res.back()!=s[i])
        res+=s[i];
    }
    return res;
}
int main()
{
    string s1="aabbbccbbsss";
    cout<<Approach2(s1)<<endl;
    cout<<Approach3(s1)<<endl;
    char s2[]="aaabbbbddeeeeeeff";
    Remove(s2);
    cout<<s2<<endl;
    return 0;
}