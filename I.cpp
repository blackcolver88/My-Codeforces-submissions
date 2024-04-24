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
    ll n,a;
    vll v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.p(a);
    }
    auto m=max_element(v.begin(),v.end());
    if(*m%2==0)
        cout<<*m/2;
    else
        cout<<(*m/2)+1;
    return 0;
}
// accepted