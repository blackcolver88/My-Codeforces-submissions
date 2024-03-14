/*Problem link :
https://codeforces.com/problemset/problem/59/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.size(),j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(65<=s[i] && s[i]<=90)
            j++;
        else if(97<=s[i] && s[i]<=122)
            k++;
    }
    if(j>k)
    {
        for(int i=0;i<n;i++)
            if(97<=s[i] && s[i]<=122)
                s[i]=toupper(s[i]);   
    }  
    else if(j<=k)
    {
        for(int i=0;i<n;i++)
            if(65<=s[i] && s[i]<=90)
                s[i]=tolower(s[i]); 
    }
    cout<<s<<endl;
    return 0;
}
//accepted