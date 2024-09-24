/*Problem link :
https://codeforces.com/problemset/problem/2010/B
*/
#include <bits/stdc++.h>
#define all(l) (l).begin(), (l).end()
#define mini(v) (*min_element(all(v)))
#define maxi(v) (*max_element(all(v)))
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
    ll t,p;
    cin >> t >> p;
    if((t==1 && p==2) || (p==1 && t==2))
        cout<<3<<endl;
    else if((t==3 && p==1) || (t==1 && p==3))
        cout<<2<<endl;
    else if((t==2 && p==3) || (t==3 && p==2))
        cout<<1<<endl;
    return 0;
}
// accepted