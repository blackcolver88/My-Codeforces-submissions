/*Problem link :
https://codeforces.com/contest/1954/problem/A
*/
#include <bits/stdc++.h>
#define l long
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
    signed long long n,f,j,u=0,k;
    vector<char>v;
    vector<string>v2;
    vector<long long>v3;
    cin>>n>>f;
    string s,s1;
    char a;
    cin>>s;
    for(ll i=0;i<f;i++)
    {
     cin>>a;
     v.p(a);
    }
    for(ll i=0;i<n;i++)
    {
     if(count(v.begin(),v.end(),s[i])==1)
          v3.p(1);
     else
          v3.p(0);
    }
    for(ll i=0;i<n;i++)
    {
     if(v3[i]==1)
     {
      j=i;
      k=1;
      while(v3[j]!=0 && j<s.size())
      { 
        u+=k;
        k++;
        j++;
        if(v3[j]==0 ||  j==s.size())
        {
          i+=k-1;
          break;  
        }
      } 
     }
    }
    cout<<u<<endl;
    return 0;
}
// accepted