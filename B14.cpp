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
    int t, n,a,b ;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        b=0;
        cin >> n ;
        vll v1,v2;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.p(a);
        }
        sort(v1.begin(),v1.end());
        for(ll i=0;i<n-1;i++)
        {
            if(v1[i]==v1[i+1])
                b++;
        }
        cout<<b<<endl;
        
    }
    return 0;
}
// accepted