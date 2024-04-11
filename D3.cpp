/*Problem link :
https://codeforces.com/contest/1850/problem/D
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
    ll t, n, k, x, a,j,b,m;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        a = 0,m=0;
        cin >> n >> k;
        j=n-1;
        vll v, v1;
        for (ll j = 0; j < n; j++)
        {
            cin >> x;
            v.p(x);
        }
        if (v.size() == 1)
            cout << 0 << endl;
        else
        {
            sort(v.begin(),v.end());
            while(j>0)
            {
                while(v[j]-v[j-1]<=k && j>0)
                {
                    j--;
                    a++;
                }
                v1.p(a+1);
                a=0;
                if(j==0)
                    break;
                j--;
            }
            auto max=max_element(v1.begin(),v1.end());
            cout<<v.size()-*max<<endl;
        }
    }
    return 0;
}
// accepted