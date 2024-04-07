/*Problem link :
https://codeforces.com/contest/1951/problem/A
*/
#include <bits/stdc++.h>
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
    ll t,n;
    string s;
    bool r=true;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       cin>>n;
       cin>>s;
       if(count(s.begin(),s.end(),'1')%2==1)
            cout<<"NO"<<endl;
       else 
        {
            if(count(s.begin(),s.end(),'1')==2)
            {
                int f = s.find('1');
                if(s[f]==s[f+1])
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }
    }
   return 0;
}
//accepted