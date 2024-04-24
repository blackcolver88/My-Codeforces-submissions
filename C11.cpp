/*Problem link :
https://codeforces.com/contest/1954/problem/A
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
    ll t,n,a,b,k,c;
    cin >> t;
    for(ll i=0;i<t;i++)
    {
        cin>>n>>a>>b>>k;
        if(a<=n/k && n/k<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
// accepted