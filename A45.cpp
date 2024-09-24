/*Problem link :
https://codeforces.com/problemset/problem/2009/A
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
        int a,b;
        cin>>a>>b;
        cout<<b-a<<endl;

    }

    return 0;
}
// accepted