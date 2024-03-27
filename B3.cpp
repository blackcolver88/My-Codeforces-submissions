/*Problem link :
https://codeforces.com/problemset/problem/337/A
*/
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    long a=0,b=0;
    vector<long> v;
    string s,c="ODOO";
    cin>>t;
    for(int i=0;i<t;i++)
    {
    cin>>s;
    if(s.size()==4)
    {
        a=0;
        b=0;
        for(int j=0;j<4;j++)
        {
            if(s[j]!=c[b])
            {
                a++;
                b++;
            }
            else
                b++;
        }
        cout<<a<<endl;
    }
    else
    {
    for(int i=0;i<s.size()-4;i++)
    {
        a=0;
        b=0;
        for(int j=i;j<i+4;j++)
        {
            if(s[j]!=c[b])
            {
                a++;
                b++;
            }
            else
                b++;
        }
        v.push_back(a);
    }
    auto m=min_element(v.begin(),v.end());
    std::cout<<s.size()-4+*m<<endl;
    v.clear();
    }
    }
    return 0;
}
//accepted