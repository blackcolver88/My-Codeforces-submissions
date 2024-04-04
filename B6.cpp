/*Problem link :
https://codeforces.com/contest/1921/problem/A
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    signed long long t,a,b,c,d;
    string s,s2,s3,s4="";
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       for(int j=0;j<4;j++)
       {
         signed long long n,m;
         bool k=false,h=false;
         cin>>n>>m;
         if(j==0)
         {
            a=n;
            b=m;
         }
         if(n!=a && k==false)
         {
            c=n;
            k=true;
         }
         if(m!=b && h==false)
         {
            d=m;
            h=true;
         }
       }
       if(c>a && d>b)
         cout<<(c-a)*(d-b)<<endl;
       else if(c<a && d>b)
         cout<<(a-c)*(d-b)<<endl;
       else if(c<a && d<b)
         cout<<(a-c)*(b-d)<<endl;
       else if(c>a && d<b)
         cout<<(c-a)*(b-d)<<endl;
      c=0;
      d=0;
   }

    return 0;
}
//accepted