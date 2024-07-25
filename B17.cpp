/*Problem link :
https://codeforces.com/problemset/problem/1969/B
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
    ll t, n, a, b, c;
    string s;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> s;
        n = s.length();
        a = 0;
        b=0;
        c = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                a++;
            if(s[i]=='0' && a!=0)
                b=1;
            if(a!=0 && b!=0)
            {
                c+=a+b;
                b=0;
            }
        }
        cout<<c<<endl;    
     }
    return 0;
}
// accepted