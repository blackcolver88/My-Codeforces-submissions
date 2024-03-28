/*Problem link :
https://codeforces.com/contest/1950/problem/C
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t,n;
    string s,s2,s3,s4="";
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>s;
        s2=s.substr(0,2);
        s3=s.substr(3,2);
        int a=stoi(s2);
        int b=stoi(s3);
        if(s2=="00")
        {
            s4+="12";
            s4+=":";
            s4+=s3;
            s4+=" AM";
        }
        else
        {
        if(1<=a && a<=9)
        {
            s4+=s2;
            s4+=":";
            s4+=s3;
            s4+=" AM";   
        }
        else if(a<=11)
        {
            s4+=s2;
            s4+=":";
            s4+=s3;
            s4+=" AM";
        }
        else if(a==12)
        {
            s4+=s2;
            s4+=":";
            s4+=s3;
            s4+=" PM";
        }
        else if(a>12 && a<22)
        {
            a=a-12;
            string d=to_string(a);
            s4+="0";
            s4+=d;
            s4+=":";
            s4+=s3;
            s4+=" PM";
        }
        else if(a>=22)
        {
            a=a-12;
            string d=to_string(a);
            s4+=d;
            s4+=":";
            s4+=s3;
            s4+=" PM";
        }
        }
        std::cout<<s4<<endl;
        s4.clear();
    }

    return 0;
}
//accepted