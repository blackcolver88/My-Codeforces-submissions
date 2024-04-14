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
    int t, n,k,a ;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        vll v1,v2;
        cin >> n >> k;
        for(ll j=0;j<n;j++)
        {
            cin>>a;
            v1.p(a);
        }
        ll c=v1[0];
        for(ll j=0;j<k;j++)
        {
            cin>>a;
            v2.p(a);
        }
        for(ll j=0;j<k;j++)
        {
            if(v2[j]>=c)
                cout<<c-1<<" ";
            else
                cout<<v2[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// accepted