/*Problem link :
https://codeforces.com/contest/1971/problem/A
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
            a=n;
            b=k;
            cout<<b<<" "<<a<<endl;
        }
        else if (n<k)
        {
           a=k;
           b=n; 
           cout<<b<<" "<<a<<endl;
        }
        
        
    }
    return 0;
}
// accepted