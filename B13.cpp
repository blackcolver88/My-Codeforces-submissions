/*Problem link :
https://codeforces.com/contest/1954/problem/B
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
    ll t, n, a, b, c,d;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n;
        vll w;
        for (ll k = 0; k < n; k++)
        {
            cin >> a;
            w.p(a);
        }
        b = 1;
        c = n;
        d= w[0];
        ll j=0;
        while(j<n - 1)
        {
            if (w[j] == w[j + 1])
            {
                b++;
            }
            else if (w[j + 1] != d)
            {
                c = min(c, b);
                b = 1;
                d = w[j];
            }
            j++;
        }

        c = min(c, b);
        if (c == n)
            cout<<-1<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
// accepted