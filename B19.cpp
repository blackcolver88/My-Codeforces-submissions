/*Problem link :
https://codeforces.com/problemset/problem/2009/B
*/
#include <bits/stdc++.h>
#define all(l) (l).begin(), (l).end()
#define mini(v) (*min_element(all(v)))
#define maxi(v) (*max_element(all(v)))
#define ll signed long long
#define ull unsigned long long
#define vl vector<long>
#define vll vector<long long>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int n;
        vl v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> s;
            m = s.find('#') + 1;
            v.p(m);
        }
        for (int i = v.size() - 1; i > -1; --i)
        {
            std::cout << v[i];
            if (i != 0)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
// accepted