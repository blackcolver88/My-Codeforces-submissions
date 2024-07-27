/*Problem link :
https://codeforces.com/problemset/problem/118/A
*/
#include <bits/stdc++.h>
#define all(l) (l).begin(), (l).end()
#define mini(v) (*min_element(all(v)))
#define maxi(v) (*max_element(all(v)))
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector<long long>
#define p push_back
#define d10 long long result = 1000000000LL
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    long long r = 1000000000LL;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, a,b,c;
        vll v, v2;
        cin>>n;
        for (ll j = 0; j < n-1; j++)
        {
            cin >> a;
            v.p(a);
        }
        b=maxi(v);
        v2.p(b+1);
        v2.p((b+1)*1+v[0]);
        if(v.size()>1)
            for(ll j=1;j<v.size();j++)
            {
                c=(v2[j]*1)+v[j];
                v2.p(c);
            }
        for(ll j=0;j<v2.size();j++)
            cout<<v2[j]<<" ";
        cout<<endl;
    }

    return 0;
}
// accepted