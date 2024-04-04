/*Problem link :
https://codeforces.com/contest/1921/problem/C
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
#define sll signed long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sll t,a,f,b,n,d=0;
    bool k=false;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
      cin>>n>>f>>a>>b;
      vector<ll>v;
      for(ll j=0;j<n;j++)
      {
        ll q;
        cin>>q;
        v.push_back(q);
      }
      if(v[0]*a>=b)
      {
        f-=b;
        if(f>0)
        {
          d++;
          if(v.size()>1)
            k=true;
          else
          {
            d=0;
            cout<<"YES"<<endl;
          }
        }
        else
          cout<<"NO"<<endl;
      }
      else
      {
        f-=v[0]*a;
        if(f>0)
        {
          d++;
          if(v.size()>1)
            k=true;
          else
          {
            d=0;
            cout<<"YES"<<endl;
          }
        }
        else
          cout<<"NO"<<endl;
      }
      if(k==true)
      {
        for(ll j=0;j<n;j++)
        {
            if(((v[j+1]-v[j])*a>=b) && j+1<=n-1 )
            {
                f-=b;
                d++;
            }
            else if(((v[j+1]-v[j])*a<b) && j+1<=n-1)
            {
                f-=(v[j+1]-v[j])*a;
                d++;  
            }
            if(f<=0 && d<=n)
            {
                d=0;
                k=false;
                cout<<"NO"<<endl;
                break;
            }
        }
      } 
      if(d==n)
      {
        d=0;
        k=false;
        cout<<"YES"<<endl;  
      }
    }

    return 0;
}
//accepted