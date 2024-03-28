/*Problem link :
https://codeforces.com/contest/1950/problem/B
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,d,c,e,f;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n;
        string m1,c="",s2="";
        char e;
        cin>>n;
        cin>>m1;
        for(int i=0;i<n;i++)
        {
            c+="9";
        }
        for(int i=n-1;i>-1;i--)
        {
            
	        int d;
            if(c[i]-'0'+m1[i]-'0'<10)
            {
                char a=(c[i] -'0')+(m1[i]-'0');
                s2=a+s2;
            }
            else
            {
                string b=to_string((c[i] -'0')+(m1[i]-'0')+d);
                e=b[1];
                s2=e+s2;
                d=b[0]-'0';
            }
	
        }
        cout<<s2<<endl;
        for (int i =0; i <s.size()/2; i++) 
        {
            if(i<=s.size()-1)
                s[s.size()-1-i]=s[i];
        }
    }
    return 0;
}
//accepted