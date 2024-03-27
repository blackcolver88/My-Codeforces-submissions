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
    string s,s2,s3;
    bool k=true;
    cin>>s;
        s2=s.substr(0,s.size()-9);
        if(s2.size()<2)
        {
            cout<<"no"<<endl;
            k=false;
        }
        else if(s2.size()>4)
        {
            cout<<"no"<<endl;
            k=false;
        }
        else
        {
            s3=s.substr(s2.size(),10);
            if(s3=="@odoo.com")
            {
                for(int i=0;i<s2.size();i++)
                {
                    if(s2[i]<97)
                    {
                        cout<<"no"<<endl;
                        k=false;
                        break;
                    }
                    else if(s[i]>122)
                    {
                        cout<<"no"<<endl;
                        k=false;
                        break;
                    }
                }
            }
            else
            {
            cout<<"no"<<endl;
            k=false;
            }
        }
    if(k==true)
        cout<<"yes"<<endl;
    return 0;
}
//accepted