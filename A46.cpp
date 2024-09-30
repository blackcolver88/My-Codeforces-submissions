/*Problem link :
https://codeforces.com/problemset/problem/2008/A
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
        if((a%2==0 && a==b*2) || (a%2==0 && b%2==0) || a%2==0 && b%2==1 && a!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

    return 0;
}
// accepted