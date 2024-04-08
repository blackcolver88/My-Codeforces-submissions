/*Problem link :
https://codeforces.com/contest/1955/problem/B
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
    sll t, n, c, d, a, k = 0;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        vector< signed long long> v,v2,v3;
        vector<vll> v1;
        cin >> n >> c >> d;
        for (ll i = 0; i < n * n; i++)
        {
            cin >> a;
            v.p(a);
        }
        auto m = min_element(v.begin(),v.end());
        v2.p(*m);
        ll f=*m +c ;
        for(ll i=0;i<n-1;i++)
            v2.p(v2[i]+d);
        v1.p(v2);
        v2.clear();
        for(ll i=0;i<n-1;i++)
        {
            v2.p(f);
            for(ll i=0;i<n-1;i++)
                v2.p(v2[i]+d);
            v1.p(v2);
            v2.clear();
            f=f+c;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                v3.p(v1[i][j]);
            }
        }
        sort(v3.begin(),v3.end());
        sort(v.begin(),v.end());
        for(ll i=0;i<n*n;i++)
        {
            if(v[i]==v3[i])
                k++;
            else
            {
                cout<<"NO"<<endl;
                k=0;
                break;
            }
        }
        if(k==n*n)
        {
            cout<<"YES"<<endl;
            k=0;
        }
    }
    return 0;
}
// accepted