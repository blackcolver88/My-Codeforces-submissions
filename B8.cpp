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
    ll t,a,b,m,e,k,f,j=0;
    sll d;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>a>>b>>m;
        
            d=a-b;
            if(d<0)
            {
                    e=a;
                    k=b;
            }
            else
            {
                    e=b;
                    k=a;
            }
            f=e+m+(k-e);
            j=f/e + f/k;
            cout<<j -(k-e)<<endl;
            j=0;
        
    }
   return 0;
}
//accepted