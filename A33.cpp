/*Problem link :
https://codeforces.com/contest/1955/problem/A
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
    sll t,n,a,b,j=0;
    string s;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       cin>>n>>a>>b ;
       if(b/2<a)
       {
        while(n>0)
        {
            if(n>=2)
            {
                n-=2;
                j+=b;
            }
            else if(n==1)
            {
                n--;
                j+=a;
            }
        }
       }
       else
       {
        while(n>0)
        {
            n--;
            j+=a;
        }
       }
       cout<<j<<endl;
       j=0;
       
    }
   return 0;
}
//accepted