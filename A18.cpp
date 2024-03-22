/*Problem link :
https://codeforces.com/problemset/problem/96/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.size(),a=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1] && i<=(n-2))
            a++;
        else if(s[i]!=s[i+1])
            a=1;
        if(a>=7)
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    if(a<7)
        cout<<"NO"<<endl;
    return 0;
}
//accepted