/*Problem link :
https://codeforces.com/contest/1945/problem/A
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
    ll t,a,b,c,j=0,e,d;
    bool r=true;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       cin>>a>>b>>c;
       if((b%3==1 && c<2) || (b%3==2 && c==0))
       {
        cout<<-1<<endl;
        r=false;
       }
       else if(b==0)
       {
        j+=a;
        j+=c/3;
        e=c%3;
        if(e>0)
            j++;
        r=true;
       }
       else if(b%3==0)
       {
        j+=a;
        j+=b/3;
        j+=c/3;
        e=c%3;
        if(e>0)
            j++;
        r=true;
       }
       else
       {
        j+=a;
        j+=b/3;
        d=b%3 ;
        if(c>0)
        {
        while(d<3)
        {
            d++;
            if(c==0)
                break;
            c--;
        }
        }
        j+=1;
        if(c!=0)
        {
            j+=c/3;
            e=c%3;
            if(e>0)
                j++;
        }
        r=true;
       }
       if(r)
       {
            cout<<j<<endl;
            j=0;
       }
    }
   return 0;
}
//accepted