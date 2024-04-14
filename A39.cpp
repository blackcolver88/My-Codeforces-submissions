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
    ll t;
    cin>>t;
    string s;
    for (ll i = 0; i < t; i++)
    {
       cin>>s;
       if(s=="abc" || s=="bac" || s=="cba"||s=="acb") 
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
// accepted