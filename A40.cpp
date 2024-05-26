/*Problem link :
https://codeforces.com/contest/1977/problem/A
*/
#include <bits/stdc++.h>
#define all(l) (l).begin(), (l).end()
#define mini(v)    (*min_element(all(v)))
#define maxi(v)    (*max_element(all(v)))
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
    ll t, k, n, a,b;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n >> k;
        if(n>=k)
        {
            if((n-k)%2==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
// accepted