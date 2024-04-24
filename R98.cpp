/*Problem link :
https://codeforces.com/contest/1921/problem/A
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
#define sll signed long long 
#define vl vector<long>
#define vll vector<long long>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,b;
    string s;
    map<char,int> m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>s;
        b=0;
        for(int j=0;j<n;j++)
            m[s[j]]++;
        for (const auto& pair : m)
        {
            b+=pair.second+1;
        }
    cout<<b<<endl;
    m.clear();
    }
   return 0;
}
//accepted