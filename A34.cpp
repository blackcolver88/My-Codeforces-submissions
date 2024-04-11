/*Problem link :
https://codeforces.com/problemset/problem/1609/A
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
    ll t, n, a, j, s;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        s = 0;
        ll b = 0;
        cin >> n;
        vll v, v1;
        for (ll k = 0; k < n; k++)
        {
            cin >> a;
            v.p(a);
        }

        for (ll k = 0; k < n; k++)
        {
            a = v[k];
            while (a % 2 == 0)
            {
                a /= 2;
                b++;
            }
            v1.p(a);
        }
        auto max = max_element(v1.begin(), v1.end());
        while (b > 0)
        {
            *max *= 2;
            b--;
        }
        for (ll k = 0; k < n; k++)
            s += v1[k];
        cout << s << endl;
    }

    return 0;
}
// accepted