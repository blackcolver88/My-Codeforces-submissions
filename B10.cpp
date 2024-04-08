/*Problem link :
https://codeforces.com/contest/1907/problem/B
*/
#include <bits/stdc++.h>
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector<long long>
#define vsll vector<signed long long>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    signed int t;
    cin >> t;
    string s,s1="";
    for (ll i = 0; i < t; i++)
    {
        cin >> s;
        string s1="";
        signed long d1=0,d2=0;
        for (sll i = s.size() - 1; i > -1; i--)
        {
            if(s[i]=='b')
                d1++;
            if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            {
                if(d1>0)
                {
                    s[i]='*';
                    d1--;
                }
            }
            if(s[i]=='B')
                d2++;
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            {
                if(d2>0)
                {
                    s[i]='*';
                    d2--;
                }
            }
        }
        for(ll k=0;k<s.size();k++)
        {
            if(s[k] != '*' && s[k] != 'b' && s[k] != 'B')
            {
                s1+=s[k];
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}
// accepted