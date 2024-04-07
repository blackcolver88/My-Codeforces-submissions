/*Problem link :
https://codeforces.com/contest/1921/problem/A
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
    sll t;
    vector<char> v={'a','b','c','d','e','f','g','h'};
    string s;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       cin>>s ;
       string d="",g="";
       char a;
       string j;
       string b;
       for(int i=1;i<9;i++)
       {
        j=s[1];
        b=to_string(i);
        if(b==j)
        {
            continue;
        }
        else
        {
            d+=s[0];
            d+=b;
            cout<<d<<endl;
            d="";
        }
       }
       for(int i=0;i<8;i++)
       {
        if(v[i]==s[0])
            continue;
        else
        {
            g+=v[i];
            g+=s[1];
            cout<<g<<endl;
            g="";
        }
       }
    }
   return 0;
}
//accepted