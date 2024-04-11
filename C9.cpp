/*Problem link :
https://codeforces.com/problemset/problem/1433/C
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
    sll t, n, x, a,m, b,u;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        a = 0;m=0;
        r = true;
        cin >> n;
        vll v;
        for (ll j = 0; j < n; j++)
        {
            cin >> x;
            v.p(x);
        }
        if (v.size() == count(v.begin(), v.end(), v[0]))
            cout << -1 << endl;
        else
        {
            while (r && !v.empty())
            {
                auto max = max_element(v.begin(), v.end());
                b = distance(v.begin(), max);
                if(b==v.size()-1)
                {
                    a=b+1;
                    r=false;
                }
                else if(b>=1 && v[b-1]!=v[b])
                {
                    a+=b+1;
                    r=false;
                }
                else if (b!=v.size()-1 && v[b] == v[b + 1] && b<=n-2)
                {
                   u=b;
                   while(v[u]==v[u+1] && u<=n-2)
                   {
                    u++;
                   }
                   a+=u+1;
                   r=false;
                }
                else
                {
                    a =m+b+1;
                    r = false;
                }
            }
            cout << a << endl;
        }
    }
    return 0;
}
// accepted