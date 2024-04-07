/*Problem link :
https://codeforces.com/contest/1951/problem/B
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
    sll t, n, k;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n >> k;
        vll v;
        sll b = 0, c = 0, c1 = 0, c2 = 0, c3 = 0;
        bool r = false;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        auto m = max_element(v.begin(), v.end());
        auto mi = min_element(v.begin(), v.end());
        if (*m == v[k - 1])
        {
            cout << n - 1 << endl;
        }
        else if (*mi == v[k - 1])
        {
            cout << 0 << endl;
        }
        else if (k - 1 == 0 && v[0] < v[1])
        {
            cout << 0 << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (v[i] > v[k - 1])
                {
                    b = i;
                    break;
                }
            }
            if (b > k - 1)
            {
                for (ll i = 0; i < b; i++)
                {
                    if (v[i] < v[k - 1])
                        c1++;
                }
                cout << c1 << endl;
            }
            else
            {
                for (ll i = 0; i < b; i++)
                {
                    if (v[i] < v[k - 1])
                    {
                        c1++;
                    }
                }
                for (ll i = b + 1; i < k - 1; i++)
                {
                    if (v[i] > v[k - 1])
                    {
                        c = i;
                        r = true;
                        break;
                    }
                }
                if (r)
                {
                    for (ll i = b + 1; i < c; i++)
                    {
                        if (v[i] < v[k - 1])
                        {
                            c2++;
                        }
                    }
                }
                else if (r == false)
                {
                    for (ll i = b + 1; i < k - 1; i++)
                    {
                        if (v[i] < v[k - 1])
                        {
                            c2++;
                        }
                    }
                }
                c3 = c1 - c2;
                if (c3 > 2)
                {
                    cout << c1 - 1 << endl;
                }
                else if (c3 <= 2)
                {
                    if (b == 0)
                    {
                        cout << c2 << endl;
                    }
                    else
                    {
                        cout << c2 + 1 << endl;
                    }
                }
            }
        }
    }
    return 0;
}
// accepted