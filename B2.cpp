/*Problem link :
https://codeforces.com/contest/1944/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long t;
  cin>>t;
  for(long i=0;i<t;i++)
  {
    long n,j=0,d=-1;
    cin>>n;
    vector<long>v,c;
    for(long i=0;i<n;i++)
    {
        long a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(long i=0;i<n;i++)
        if(v[i+1]-v[i]>1 && i!=n-1)
        {
            long d=v[i]+1;
            break;
        }
    if(d==-1)
    {
        while(j<n)
        {
            if(j%2==0)
            {
                auto m=min(v.begin(),v.end());
                c.push_back(*m);
                v.erase(m);
            }
            if(j%2==1)
            {
                auto m=min(v.begin(),v.end());
                v.erase(m);
            }
    }
    }
  }
  return 0;
}
//accepted