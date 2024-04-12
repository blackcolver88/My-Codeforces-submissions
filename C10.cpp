/*Problem link :
https://codeforces.com/contest/1954/problem/C
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
    ll t, n, a;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        string c= "", d = "";
        string a, b;
        cin >> a >> b;
        n = a.size();
        for(sll i=0;i<n;i++)
        {
            if (a[i] == b[i])
            {
                c += a[i];
                d += a[i];
            }
            else
            {
                d += min(a[i], b[i]);
                c += max(a[i], b[i]);
                break;
            }
        }
        for(sll i =c.size(); i<n; i++)
        {
            c += min(a[i], b[i]);
            d += max(a[i], b[i]);
        }
        cout<<c<<endl;
        cout<<d<<endl;
    }
    return 0;
}
// accepted