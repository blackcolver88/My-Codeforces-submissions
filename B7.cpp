/*Problem link :
https://codeforces.com/contest/1921/problem/B
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,a=0,n,b=0,d=0;
    string s2,s3;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       a=0;
       b=0;
       cin>>n;
       cin>>s2>>s3;
       for(ll q=0;q<n;q++)
       {
            if(s2[q]==s3[q])
                d++;
       }
       if(d==n)
       {
            d=0;
            cout<<d<<endl;
       }
       else
       {
            d=0;
            for(ll j=0;j<n;j++)
            {
                    if(s2[j]=='0' && s3[j]=='1')
                        a++;
                    else if(s2[j]=='1' && s3[j]=='0')
                        b++;
            }
            
            if(b>=a)
                    cout<<b<<endl;
            else if(a>b)
                    cout<<a<<endl;
            
       } 
           
    }

    return 0;
}
//accepted