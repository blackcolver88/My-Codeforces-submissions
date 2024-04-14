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
    int t,n,a,b;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       vll v,v2;
       cin>>n;
       for(int j=0;j<n;j++)
       {
        cin>>a;
        v.p(a);
       }
       a=1;
       for(int j=0;j<n;j++)
            a*=v[j];
       b=a;
       if(count(v.begin(),v.end(),0)>1)
            cout<<0<<endl;
       else if(count(v.begin(),v.end(),0)==1)
       {
            a=1;
            for(int j=0;j<n;j++)
            {
                if(v[j]==0)
                    v[j]=1;
            }
            for(int j=0;j<n;j++)
                a*=v[j];
            cout<<a<<endl;
       }
       else
       {
        for(int j=0;j<n;j++)
        {
            b=b/v[j];
            b=b*(v[j]+1);
            v2.push_back(b);
            b=a;
        }
        auto m=max_element(v2.begin(),v2.end());
        std::cout<<*m<<endl;
       }
        
    }
    return 0;
}
// accepted