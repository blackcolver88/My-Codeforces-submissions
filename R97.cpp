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
    long t,n,m;
    string s,b;
    cin>>t;
    for(long i=0;i<t;i++)
    {
       set<string> v;
       cin>>n;
       cin>>s;
       for(long j=0;j<n-1;j++)
       {
        b=s;
        b.erase(b.begin()+j);
        b.erase(b.begin()+j);
        v.insert(b);
       }
       cout<<v.size()<<endl;
    }
   return 0;
}
//accepted